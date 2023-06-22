#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter an integer number: ");
    scanf("%d", &x);
    if (x < 100)
        printf("Your number %d is smaller than 100\n",x);
    else if (x==100)
        printf("Your number %d equals to 100\n",x);
    else
        printf("Your number %d is bigger than 100\n",x);
    return 0；
}
