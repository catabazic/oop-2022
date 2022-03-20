#pragma once

class Sort

{
    int* vector;
    int nr;

  public:
    Sort(int numb, int min, int max); //c1

    Sort();//c2????

    Sort(int* v, int n);//c3

    Sort(int nr, ...);//c4

    Sort(const char*);//c5

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int GetElementsCount();

    int GetElementFromIndex(int index);
};