#include <stdio.h>
int main()
{
    int age, license;
    printf("[DRIVING ELIGIBILITY]\n\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a driving license? (1=Yes, 0=No): ");
    scanf("%d", &license);
    if (age>=18 && license==1) {
        printf("Person is Eligible for Driving.\n");        
    }
    else if (age<18) {
        printf("Underage for Driving, NOT ELIGIBLE.\n");
    }
    else if (license==0) {
        printf("No license, NOT ELIGIBLE.\n");
    }
    return 0;
}
