/*Program to take a phone number input in the form of (xxx) xxx-xxxx from user and display it as xxx.xxx.xxxx*/
#include <stdio.h>
int main()
{
    int area_code, exchange, number;
    printf("Enter your phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &exchange, &number);
    printf("Your phone number is: %d.%d.%d\n", area_code, exchange, number);
    return 0;
}