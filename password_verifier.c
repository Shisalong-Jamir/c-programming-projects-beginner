#include <stdio.h>
#include <string.h>
int main()
{
	char password[20];
	int attempts=0;
	printf("[PASSWORD ENTRY]\n");
	printf("\n");
	while (attempts<3) {
		printf("Enter the Password: ");
		scanf("%19s", password);
		if (strcmp(password, "student123")==0){
			printf("\n");
			printf("[Login Successful]\n");
			break;
		}
		else {
			attempts++;
			printf("Incorrect Password. Remaining attempts: %d\n", 3-attempts);
		}
	}
	if (attempts==3){
		printf("\n");
		printf("You have entered the password incorrect 3 times. \nYou've been locked out.\n");
	}
	return 0;
} 
		
			
	
