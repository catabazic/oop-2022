

class Number

{
    int base;
    char* value;

  public:
    Number(const char* value, int base); // where base is between 2 and 16
    Number(int);

    ~Number();

    Number operator--();
    Number operator--(int);

    char* operator+=( Number& r);
    Number operator=(const char* r);

    friend char* operator+(Number& l, Number& r);
    friend char* operator-(Number& l,Number & r);

    friend char* operator-(char*, Number&);
    friend char* operator+(char*, Number&);

    bool operator>( Number& r);

    int operator[](int ind);

    void SwitchBase(int newBase);

    void Print();

    char* GetValue();

    int GetDigitsCount(); // returns the number of digits for the current number

    int GetBase(); // returns the current base
};

char* from10(int value, int base);
char* to10(char* value, int base);
char* add(char* r, char* l);
char* dec(char* r, char* l);