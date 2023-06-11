#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*homework1*/
    printf("Hello \nworld!\n\n!");   /*See what happens when using \n\n*/
    printf("Hello world!\\n\n");   /*See what happens when using two backslash characters\\*/

    /*homework2*/
    int height;
    float diameter;
    printf("Enter the value of height:\n");
    scanf("%d", & height );
    printf("Enter the value of diameter:\n");
    scanf("%lf", & diameter );
    printf("The surface area of the can is: %f\n", 2 * 3.14159265 * (diameter / 2) * (diameter / 2) + 2 * 3.14159265 * (diameter /2) * height);
    return 0;
}
