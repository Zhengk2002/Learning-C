#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*homework 1: print factorial*/
    int prod = 1, n = 10; /*prod = product*/
    while (n >= 2){
        prod = prod * n;
        n--;
    }
    printf("The result is %d\n\n\n\n\n", prod * n);






    /*homework 2: summation of divisors of a number*/
    int div, num, res, sum = 0; /*div = divisor, res = result*/
    printf("Please enter an integer number:");
    scanf("%d", & num);

    for (div = 1; div < num; div++){
        res = num / div;
        if (res * div == num){ /*check if there is remainder. The other way to check is: res % div*/
            printf("One of the factors of %d is %d\n", num, res);
            sum = sum + div;
        }
        }
    printf("The summation of all divisors of %d is %d\n", num, sum);

    if (sum != num){
        printf("%d is not a perfect number.\n", num);
    }else
        printf("%d is a perfect number.\n\n\n\n\n", num);






    /*homework 3*/
    double sum1 = 1.00;
    int prod1 = 1, den1;

    for (den1 = 1; den1 <= 20; den1++){
        prod1 = prod1 * den1;
        sum1 = sum1 + 1.00 / prod1;
    }
    printf("The value of e is about %.7lf\n\n\n\n\n", sum1);





    /*homework 4: estimating the value of Pi*/
    int myNum, i;
    double eValue = 1.00; /*eValue = estimated value of Pi/2*/
    printf("Please enter a positive integer number:");
    scanf("%d", & myNum);

    for (i = 1; i <= myNum; i++){
        eValue = (4.00 * i * i) / (4.00 * i * i - 1) * eValue;
    }
    printf("The estimated value of Pi is %lf\n\n\n\n\n", eValue * 2);





    /*homework 5: estimating the value of Pi*/
    int myNum1, i1;
    double eValue1 = 0.00, term1, term2;
    printf("Please enter a positive integer number:");
    scanf("%d", & myNum1);
    for (i1 = 1; i1 <= myNum1; i1++){
        term1 = 1.00 / (4 * i1 - 3);
        term2 = 1.00 / (4 * i1 - 1);
        eValue1 = eValue1 + term1 - term2;
        }
    printf("The estimated value of Pi is %lf\n", eValue1 * 4);
    return 0;
    }
