#include "vector.h"

int main() {
    Vector<int> v;
    v.push(9);
    v.push(19);
    v.push(6);
    v.push(4);
    v.push(23);
    v.print();

    v.remove(2);
    v.print();

    v.insert(2, 34);
    v.set(1, 4);
    v.print();

    

}