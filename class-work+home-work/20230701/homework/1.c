#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*homework 1: Function: the basics
Instruction:
Write functions that receive a real number parameter and return:
Write a program that tabulates the values of a, a^3, and sin(a)
using 4 decimal digits after the decimal point from a = -1 to +1,
stepping by 0.1! lnclude <math.h> to use sin. */

double cube(double x){
    return x*x*x;
}
double absolute(double y){
    if (y < 0){
        return -y;
    }
    return y;
}

int main()
{
    double a, cubeValue, absoluteValue, sineValue;
    for (a = -1; a <= 1; a += 0.1){
        cubeValue = cube(a);
        absoluteValue = absolute(a);
        sineValue = sin(a);
        printf("%.4lf,   %.4lf,   %.4lf,   %.4lf\n", a, cubeValue, absoluteValue, sineValue);
    }
return 0;
}
