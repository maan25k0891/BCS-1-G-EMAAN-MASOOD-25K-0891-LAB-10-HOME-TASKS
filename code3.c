#include <stdio.h>

int main () {
   char str[200];
   int i = 0;
   int vowels = 0, consonants = 0, digits = 0, spaces = 0, characters =0;

   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
 
   while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
		|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I'|| str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }

        else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
            consonants++;
        }

        else if (str[i] >= '0' && str[i] <= '9'){
    		digits++;
		}

        else if (str[i] == ' '){
            spaces++;
        }
        i++;
                characters = vowels + consonants + digits + spaces;

    }
        
printf("Statistics\n");
printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", consonants);
printf("Digits: %d\n", digits);
printf("Spaces: %d\n", spaces);
printf("Total characters: %d", characters);


return 0;
}
