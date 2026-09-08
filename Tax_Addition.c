/*Program developed to calculate 5% Tax Addition to a dollar-and-cent amount added by user*/
#include <stdio.h>
#define TAX_RATE 0.05
int main(void)
{
    float amount, tax, total;
    printf("Enter the Dollar-and-Cent Amount: ");
    scanf("%f", &amount);
    tax=amount*TAX_RATE;
    total=amount+tax;
    printf("Additional Tax is 5 percent of given amount\n");
    printf(".\n");
    printf("The Total Amount with additional Tax: $%.2f\n", total);
    return 0;
}
