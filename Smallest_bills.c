/*Program used to break down the given amount of dollars into the smallest number of $20, $10, $5 and $1 bills*/
#include <stdio.h>
int main()
{
    int amount, twenty, ten, five, one;
    printf("This program breaks down the given amount of dollars into the smallest number of $20, $10, $5 and $1 bills\n");
    printf("Enter the amount of Dollars (a whole number): ");
    scanf("%d", &amount);
    printf("Amount of money entered by User: %d\n", amount);
    twenty = amount/20;
    amount = amount%20;
    ten = amount/10;
    amount = amount%10;
    five = amount/5;
    amount = amount%5;
    one = amount/1;
    amount = amount%1;
    printf("Number of $20 bills : %d\n", twenty);
    printf("Number of $10 bills : %d\n", ten);
    printf("Number of $5  bills : %d\n", five);
    printf("Number of $1  bills : %d\n", one);
    return 0;
}