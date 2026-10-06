/*Program to determine whether an entered value is VOWEL OR CONSONANT*/
#include <stdio.h>
int main()
{
	char ch;
	printf("[VOWEL OR CONSONANT]\n");
	printf("\n");
	printf("Enter an alphabet: ");
	scanf("%c", &ch);
	if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
		switch (ch){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("'%c' is a VOWEL.", ch);
			    break;
			default:
				printf("'%c' is a CONSONANT.", ch);
				break;
			}
		}
	else {
		printf("ERROR: Value is not an alphabet.");
	}
	return 0;
}
