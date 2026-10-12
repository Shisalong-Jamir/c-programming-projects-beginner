#include <stdio.h>
int main()
{
	int score;
	char choice;
	start:
		printf("[SCORE DETERMINER]\n");
		printf("\n");
		printf("Enter the marks scored (Type -1 to exit): ");
		scanf("%d", &score);
		if (score==-1){
			goto end;
		}
		else {
			if (score>=0 && score<=100) {
				printf("The student has scored: %d\n", score);
				printf("Would you like to go again? (y/n): ");
				scanf(" %c", &choice);
				if (choice=='y' || choice=='Y'){
					goto start;
				}
				else {
					goto end;
				}
			}
			else {
				printf("You have entered an invalid score; Enter again\n");
				goto start;
			}
		}
	end:
		printf("[Program Completed]\n");
		return 0;
	}
