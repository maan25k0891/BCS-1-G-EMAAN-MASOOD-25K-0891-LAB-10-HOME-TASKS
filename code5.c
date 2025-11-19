#include <stdio.h>
int main () {
	int names[50][100];
	int num, i, sum = 0;
	int marks[50];
	int highest;
	
	printf("Enter the number of students: ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		printf("Enter the name of the student: " );
		scanf("%s", names[i]);
	
	
	printf("Enter the marks: ");
        scanf("%d", &marks[i]);
    }

	for(i = 0; i < num; i++) {
        sum += marks[i];
        if(marks[i] > marks[highest]) {
            highest = i;
        }
    }

    float average = (float)sum / num;

    
    printf("\nHighest scorer: %s with %d marks\n", names[highest], marks[highest]);
    printf("Average marks: %.2f\n", average);
	
	return 0;
}
