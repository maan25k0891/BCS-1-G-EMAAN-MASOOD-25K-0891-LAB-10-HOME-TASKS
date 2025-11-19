#include <stdio.h>
int main () {
	int i;
	char message[100];
	char encrypted[100];
	char decrypted[100];
	
	printf("Enter the message: ");
    scanf("%[^\n]", message); 
	
	for(i = 0; message[i] != '\0'; i++) {
		char character = message[i];
		if(character >= 'a' && character <= 'z') {
            encrypted[i] = ((character - 'a' + 3) % 26) + 'a';
        } 
		else if(character >= 'A' && character <= 'Z') {
            encrypted[i] = ((character - 'A' + 3) % 26) + 'A';
        } 
		else {
            encrypted[i] = character; 
        }
    }
    encrypted[i] = '\0';
	
	for(i = 0; encrypted[i] != '\0'; i++) {
        char character = encrypted[i];
        if(character >= 'a' && character <= 'z') {
            decrypted[i] = ((character - 'a' - 3 + 26) % 26) + 'a';
        } else if(character >= 'A' && character <= 'Z') {
            decrypted[i] = ((character - 'A' - 3 + 26) % 26) + 'A';
        } else {
            decrypted[i] = character; 
        }
    }
    decrypted[i] = '\0';
	
	printf("\nOriginal: %s\n", message);
    printf("Encrypted: %s\n", encrypted);
    printf("Decrypted: %s\n", decrypted);

    return 0;
}
	
	
