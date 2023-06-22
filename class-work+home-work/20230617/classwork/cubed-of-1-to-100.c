#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    for (num = 1; num <= 100; num ++) {
        printf("The result is %d\n", num*num*num);
    }
    return 0;
}
