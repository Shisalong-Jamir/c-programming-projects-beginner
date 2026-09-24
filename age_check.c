/*Program to check the age group of a person*/
#include <stdio.h>

int main() 
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    (age >= 18) 
        ? printf("The person is 18 or older.\n") 
        : (age >= 16) 
            ? printf("The person is between 16 and 18 years old.\n") 
            : printf("The person is younger than 16.\n");

    return 0;
}