#include <stdio.h>

int main () {
    int i;
    char email[100];
    
    printf("Enter your email: ");
    scanf("%s", email);
    
    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            i++;  
        
            while (email[i] != '\0') {
                printf("%c", email[i]); 
                i++;
            }
        }
    }
    
    return 0;
}

