#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day = 7;

    switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tueday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thuay");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Check your day again.\n");
    }
    return 0;
}
