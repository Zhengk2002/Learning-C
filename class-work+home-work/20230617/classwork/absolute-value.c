#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    printf("Enter an integer number:");
    scanf("%d", &y);
    if (y<0)
        printf("The absolute number of %d is %d\n", y, -y);
    else if (y==0)
        printf("The absolute number is 0");
    else
        printf("The absolute number of %d is %d\n", y, y);
    return 0;
}
