#include <stdio.h>

int main()
{
	double num1 = -5.0, num2 =5.0;
    while ((num2-num1) > 0.0001)
    {
        double x = (num2 + num1)/2.0;
        if ((x*x*x + 3*x*x + 2.0) > 0.0)
            {
                num2 = x;
            }
        else
            {
                num1 = x;
            }
    }
    printf("The zero is: %lf\n", num1);
	return 0;
}
