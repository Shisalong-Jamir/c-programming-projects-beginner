/*Programm to determine whether an entered value is a vowel or a consonant*/
#include <stdio.h>
int main()
{
    char ch;
    printf("[VOWEL OR CONSONANT]\n");
    printf("\n");
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("'%c' is a vowel.", ch);
        }
        else{
            printf("'%c' is a consonant.", ch);
        }
    }
    else {
        printf("The entered character '%c' is not an alphabet.", ch);
    }
    return 0;
}
