#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    x = 1; /*initialization*/
    while (x <=100)
    {
        printf("%d\t", x*x*x);
        x = x+1;
    }
    return 0;
}
