#include <stdio.h>
int main()
{
	int dividend, divisor, quotient, remainder;
	printf("[QUOTIENT-REMAINDER CALCULATOR)\n");
	printf("Enter the number to be divided (DIVIDEND): ");
	scanf("%d", &dividend);
	printf("Enter the number to be used to divide (DIVISOR): ");
	scanf("%d", &divisor);
	printf("\n");
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	printf("The Quotient is %d\n", quotient);
	printf("The Remainder is %d", remainder);
	return 0;
}
	
