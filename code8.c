#include <stdio.h>
int main () {
	
	char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
	
	char items[3][3][20] = {

		{"Soup", "Dynamite Prawns", "Garlic Bread"},
		{"Alfredo Pasta", "Fried Fish", "Pizza"},
		{"Ice-cream", "Red Velvet Cake", "Pudding"}
		
		};
	
	float prices[3][3] = {
		
		{5, 11, 3},
		{10, 15, 9},
		{7, 8, 6}
		
	};
	
	int i, j;
	
	printf("OUR MENU\n");
	printf("\n");
	
	for(i = 0; i < 3; i++){
		printf("%s: \n", categories[i]);
	for(j = 0; j < 3; j++){
        printf("  %s: $%.2f\n", items[i][j], prices[i][j]);

	}
}

	printf("\n");
	printf("\n");

    printf("BUDGET FRIENDLY OPTIONS\n");
	printf("\n");
	
	for(i = 0; i < 3; i++){
	for(j = 0; j < 3; j++){
		if(prices[i][j] < 10) {
        printf("%s (%s): $%.2f\n", items[i][j], categories[i], prices[i][j]);
    }
}
}
	return 0;
}
