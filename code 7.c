#include <stdio.h>
#include <string.h>

int main () {
	char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
	
	char courses[4][5][20] = {
        {"Calculus", "Physics", "ICT"},                 
        {"PF", "English"},                         
        {"PF", "Physics", "Calculus", "ICP"},           
        {"English", "Calculus", "ICT", "ICP", "Physics"} 
    };

	
	int course_count[4] = {3, 2, 4, 5};

    char search_course[20];
    int i, j;

	  for (i = 0; i < 4; i++) {
        printf("%s is taking: ", students[i]);
        for (j = 0; j < course_count[i]; j++) {
            printf("%s ", courses[i][j]);
        }
        printf("\n");
    }
	
	printf("\nEnter a course you want to search: ");
    scanf("%s", search_course);
	printf("Students taking %s:\n", search_course);
	
    for (i = 0; i < 4; i++) {
        for (j = 0; j < course_count[i]; j++) {
            if (strcmp(courses[i][j], search_course) == 0) {
                printf("- %s\n", students[i]);
                break;  
            }
        }
    }
    
    for (i = 0; i < 4; i++) {
        if (course_count[i] > 3) {
            printf("%s is overloaded (taking %d courses)\n", students[i], course_count[i]);
        }
    }
	
	return 0;
}
