/*This Program lets the user input a dd/mm/yyyy birthday format value and displays in yyyy/mm/dd format*/
#include <stdio.h>
int main(void)
{
    int dd, mm, yyyy;
    printf("Enter your birthday in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    printf("The Date in you have entered, but in yyyy/mm/dd format is:\n");
    printf("%d/%d/%d\n", yyyy, mm, dd);
    printf("You were born on the  %dth day of the %dth month of the year %d\n", dd, mm, yyyy);
    return 0;
}