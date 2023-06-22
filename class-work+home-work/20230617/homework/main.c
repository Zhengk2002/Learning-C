#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*homework1*/
    double P_x;
    double P_y;
    double Q_x;
    double Q_y;
    double Eu_distance; /*Eu_distance = Euclidean distance*/

    printf("Please enter the x-coordinate of point P:");
    scanf("%lf", & P_x);
    printf("Please enter the y-coordinate of point P:");
    scanf("%lf", & P_y);
    printf("Please enter the x-coordinate of point Q:");
    scanf("%lf", & Q_x);
    printf("Please enter the y-coordinate of point Q:");
    scanf("%lf", & Q_y);

    Eu_distance = sqrt((Q_x - P_x) * (Q_x - P_x) + (Q_y - P_x) * (Q_y - P_x));
    printf("The Euclidean distance between points P and Q is %lf\n", Eu_distance);



    /*homework2*/
    double a, b, c, dis, root1, root2, root;
    printf("Please enter the value of a:");
    scanf("%lf", & a);
    printf("Please enter the value of b:");
    scanf("%lf", & b);
    printf("Please enter the value of c:");
    scanf("%lf", & c);

    dis = b * b - 4 * a * c; /*dis = discriminant*/

    if (dis>1){
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("One of roots of the equation %lf x * x %lf (x) %lf is:%lf\n", a * a, b, c, root1);
        printf("The other root of the equation %lf x * x %lf x %lf is:%lf\n", a * a, b, c, root2);
    }else if (dis == 0){
        root = (-b + sqrt(dis)) / (2 * a);
        printf("The root of the equation %lf x * x %lf x %lf is:%lf\n", a * a, b, c, root);
    }else{
        printf("There is no solution for the equation: %lf x * x %lf x %lf\n", a * a, b, c);
    }



    /*homework3*/
    int num_dash;
    printf("Please enter the number of dashes: \n");
    scanf("%d", &num_dash);
    printf("+");
    for (int i = 0; i < num_dash; i++){
        printf("-");
    }
    printf("+");



    return 0;
}
