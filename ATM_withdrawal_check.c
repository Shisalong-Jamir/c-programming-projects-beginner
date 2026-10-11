#include <stdio.h>
int main()
{
	int tot_amount, og, n1000, n500, n200, n100, n50;
	printf("[WITHDRAWAL OF SPECIFIED AMOUNT IN 1000,500,200,100 AND 50 notes]\n");
	printf("\n");
	printf("Enter the amount to be withdrawn: ");
	scanf("%d", &tot_amount);
	og=tot_amount;
	n1000=tot_amount/1000;
	tot_amount=tot_amount%1000;
	n500=tot_amount/500;
	tot_amount=tot_amount%500;
	n200=tot_amount/200;
	tot_amount=tot_amount%200;
	n100=tot_amount/100;
	tot_amount=tot_amount%100;
	n50=tot_amount/50;
	tot_amount=tot_amount%50;
	printf("The entered amount: %d can be withdrawn in the form of: \n1000 notes: %d \n500 notes: %d \n200 notes: %d \n100 notes: %d \n50 notes: %d", og, n1000, n500, n200, n100, n50);
	return 0;
}
