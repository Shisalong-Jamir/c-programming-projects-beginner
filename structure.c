/*Program for addition (main) and subtraction (user-defined) 
of a global variable 'a' with entered variables 'b' and 'c'*/      //DOCUMENTATION SECTION

#include <stdio.h>  //PREPROSSESOR OR LINK SECTION

int a=10;           //GLOBAL DECLARATION SECTION

void subtract();    //DECLARING THE USER-DEFINED SECTION

int main()          //MAIN FUNCTION
{ //START OF STATEMENTS
    int b;
    printf("[MAIN FUNCTION]\n");
    printf("Enter the value of 'b': ");
    scanf("%d", &b);
    printf("The value of a+b is: %d\n", a+b);
    subtract();      //CALLING OF USER-DEFINED FUNCTION
    return 0;
}  //END OF STATEMENTS
void subtract()     //SUB-PROGRAM OR USER-DEFINED FUNCTION
{
    int c;
    printf("[USER-DEFINED FUNCTION]\n");
    printf("Enter the value of 'c': ");
    scanf("%d", &c);
    printf("The value of a-c is: %d\n", a-c);
}
