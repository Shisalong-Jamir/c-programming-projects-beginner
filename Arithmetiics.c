/*Calculation of 3x+2x4-5x³-x²+7х -6*/
#include <stdio.h>
int main()
{
    int x, result, result2;
    printf("This program calculates the value of the expression 3x + 2*4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter the value of x (a whole number): ");
    scanf("%d", &x);
    result= 3*x + 2*4 - 5*x*x*x - x*x + 7*x - 6;
    printf("User entered the value of x as: %d\n", x);
    printf("Result: %d\n", result);
    printf(".\n");
    printf("Now, using the same given value of x, calculation for ((((3x +2)*х-5)*х-1)x+7)x-6:\n");
    printf("Given value of x is: %d\n", x);
    result2= ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("Result 2: %d\n", result2);
    return 0;
}