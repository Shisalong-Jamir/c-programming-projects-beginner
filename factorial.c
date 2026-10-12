/*Program to input a positive number, and compute its factorial*/
#include <stdio.h>
int main()
{
	unsigned long long factorial=1;
	int n;
	printf("[FACTORIAL]\n\n");
	printf("Enter a positive number: ");
	scanf("%d", &n);
	if (n<0){
		printf("ERROR: Factorial cannot be a negative number.\n");
	}
	else {
		for (int i=1; i<=n; i++) {
			factorial*=i;
		}
		printf("Factorial of the number %d is: %llu", n, factorial);
	}
	return 0;
}
	
	
