/*Addition of Two fractions*/
#include <stdio.h>
int main(void)
{
    int num1, num2, deno1, deno2, result_num, result_deno;
    printf("Enter the First Fraction (numerator/denominator): ");
    scanf("%d/%d", &num1, &deno1);
    printf("Enter the Second Fraction (numerator/denominator): ");
    scanf("%d/%d", &num2, &deno2);
    result_num = num1*deno2 + num2*deno1;
    result_deno = deno1*deno2;
    printf("The Result of addition of %d/%d + %d/%d = %d/%d\n", num1, deno1, num2, deno2, result_num, result_deno);
    printf(".\n");
    printf("Now, we shall let the user enter both the fractions at the same time, separated by a plus sign (+)\n");
    printf("Enter the two fractions (num/deno + num/deno): ");
    scanf("%d/%d + %d/%d", &num1, &deno1, &num2, &deno2);
    result_num= num1*deno2 + num2*deno1;
    result_deno= deno1*deno2;
    printf("The result for addition of %d/%d + %d/%d = %d/%d\n", num1, deno1, num2, deno2, result_num, result_deno);
    return 0;
}