/*Program to determine whether an entered year is a Leap Year or NOT*/
#include <stdio.h>
int main()
{
	int year;
	printf("[LEAP YEAR OR NOT LEAP YEAR?]\n\n");
	printf("Enter the year: ");
	scanf("%d", &year);
	if ((year%400==0) || (year%4==0 && year%100!=0)){
		printf("The year %d is a LEAP YEAR.", year);
	}
	else {
		printf("The year %d is NOT A LEAP YEAR.", year);
	}
	return 0;
}
