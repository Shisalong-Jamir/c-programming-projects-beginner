/*This program takes two input values from the user and performs the four arithmetic operations*/
#include <stdio.h>
int main()
{
    int a, b, add, sub, prod, div;
    printf("[Program for performing the 4 Arithmetic Calculations]\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    add= a+b;
    sub= a-b;
    prod= a*b;
    div= a/b;
    printf("Addition of a and b is: %d\n", add);
    printf("Subtraction of b from a is: %d\n", sub);
    printf("Multiplication of a and b is: %d\n", prod);
    printf("Division of a by b is: %d\n", div);
    return 0;
}