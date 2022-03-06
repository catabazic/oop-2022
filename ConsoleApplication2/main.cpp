
#include <iostream>
#include "NumberList.h"
#include "Students.h"
#include "Compare.h"


int main() {
    NumberList N;
    N.Init();
    N.Add(3);
    N.Add(35);
    N.Add(12);
    N.Add(63);
    N.Add(45);
    N.Print();
    N.Sort();
    N.Print();

    return 0;
}

/*
int main() {
    Students A;
    Students B;

    A.setName("Popovici Alexandru");
    A.setMath(9);
    A.setEnglish(10);
    A.setHistory(7);
    A.setAverage();

    B.setName("Andriesi Monica");
    B.setMath(6);
    B.setEnglish(8);
    B.setHistory(10);
    B.setAverage();

    compName(A, B);
    compMath(A, B);
    compEng(A, B);
    compHist(A, B);

    return 0;
}*/