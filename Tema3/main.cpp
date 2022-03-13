
#include "Math.h"
#include <iostream>

int main()
{
    Math math;
    math.Add(36, 256);

    math.Add(42, 74, 36);

    math.Add(35.0, 8.6);

    math.Add(37.4, 27.4, 28.4);

    math.Mul(3, 7);

    math.Mul(4, 3, 5);

    math.Mul(2.5, 3.5);

    math.Mul(2.0,3.0,5.0);

    math.Add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    
}

