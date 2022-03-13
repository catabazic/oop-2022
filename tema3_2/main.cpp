#include "Canvas.h"
#include <iostream>

int main()
{
    Canvas canv(30,30);
    canv.DrawCircle(10, 10, 5, '*');
    canv.FillCircle(10, 10, 5, '*');
    
    canv.DrawRect(20,5,29,15,'*');
    canv.FillRect(20, 5, 29, 15, '*');
    
    canv.DrawLine(5,20,10,25,'*');

    canv.Print();
}

