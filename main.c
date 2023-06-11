#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; /*declare an int variable, called num*/
    printf("Please enter an integer value:"); /*I here am practicing how to input a number. */
    scanf("%d", & num );  /*There is a big difference between prinf and scanf. Scanf is for input thingy, also there is a & between the variable. & is for finding the adress for num. */
    printf("Currently, the integer value you enter is:%d\n", num);
    printf("The square value for num is: %d\n", num * num);  /*Here I practice how to square the variable. */
    printf("The square of %d is %d\n", num, num * num);

    return 0;
}
