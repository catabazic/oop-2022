
#include <iostream>

struct JsonValue {
    virtual ~JsonValue() = 0;

    virtual void print(std::ostream& out) = 0;
};

struct NumberValue : JsonValue {
    long long value;

    NumberValue(long long x) {
        value = x;
    }

    void print(std::ostream& out) override {
        out << value;
    }
};

struct StringValue : JsonValue {
    char value[256];

    StringValue(const char* x) {
        for (int i = 0; i < 235; i++) {
            value[i] = x[i];
        }
    }

    void print(std::ostream& out) override {
        for (int i = 0; i < 256; i++) {
            out << value[i];
        }
    }
};

struct BoolValue : JsonValue {
    bool value;

    BoolValue(bool x) {
        value = x;
    }

    void print(std::ostream& out) override {
        out << value;
    }
};

struct NullValue : JsonValue {
    NullValue() {
    }

    void print(std::ostream& out) override {
        out << "nullptr";
    }
};

struct ArrayValue : JsonValue {
    JsonValue* values[16];
    unsigned size;

    ArrayValue() {
        size = 0;
    }

    void add(JsonValue* value) {
        values[size] = value;
        size++;
    }
    void print(std::ostream& out) override {
        for (unsigned i = 0; i < size; i++) {
            out << values[i];
        }
    }
};

struct ObjectValue : JsonValue {
    struct Pair {
        char name[256];
        JsonValue* value;
    };
    Pair values[16];
    unsigned size;

    ObjectValue() {
        size = 0;
    }

    void add(const char* name, JsonValue* value) {
        for (int i = 0; i < 256; i++) {
            values[size].name[i] = name[i];
        }
    }
    void print(std::ostream& out) override {
        for (unsigned i = 0; i < size; i++) {
            for (int j = 0; i < 256; i++) {
                out << values[size].name[i] << " ";
            }
            out <<'\n';
        }
    }
};

int main() {
    auto array_numbers = new ArrayValue();
    array_numbers->add(new NumberValue(5));
    array_numbers->add(new NumberValue(10));
    array_numbers->add(new NumberValue(15));

    auto array_strings = new ArrayValue();
    array_strings->add(new StringValue("abc"));
    array_strings->add(new StringValue("def"));
    array_strings->add(new StringValue("ghi"));

    auto subobject = new ObjectValue();
    subobject->add("email", new StringValue("t@gmail.com"));
    subobject->add("name", new StringValue("T"));
    subobject->add("online", new BoolValue(true));

    auto object = new ObjectValue();
    object->add("n", new NullValue());
    object->add("array_numbers", array_numbers);
    object->add("array_strings", array_strings);
    object->add("info", subobject);

    object->print(std::cout);
}

JsonValue::~JsonValue() {
}
