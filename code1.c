#include <stdio.h>
#include <string.h>

int main () {
	char password[50];
	int i, length, uppercase = 0, digit = 0, special =0;
	
	printf("Enter the password: ");
	scanf("%s", password);
	
	length = strlen(password);
	
	if (length < 8) {
        printf("Password must be at least 8 characters.\n");
        return 0;
    }
    
    for(i = 0; i < length; i++){
    	
    	if (password[i] >= 'A' && password[i] <= 'Z') {
    		uppercase = 1;
		}
    	if (password[i] >= '0' && password[i] <= '9') {
    		digit = 1;
		}
    	
    	if (password[i] == '@' || password[i] == '$' || password[i] == '*' || password[i] == '#' || password[i] == '!' || password[i] == '^') {
    		special = 1;
		}
	}
	
	if(uppercase && digit && special) {
		    printf("Password is strong! \n");
	}
	else {
        printf("Password is not strong! \n");
        if (!uppercase) {
        	printf("Your password must have an uppercase letter! \n");
		}
        if (!digit) {
        	printf("Your password must have a digit! \n");
        }
        if (!special) {
        	printf("Your password must have a special character! \n");
        }
    }

	return 0;
}
