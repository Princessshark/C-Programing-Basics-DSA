#include<stdio.h>
#include<time.h>
#include<stdlib.h>
	
void main() {
	
	int i, temp, sorted, range = 50, size = 5, array[size];
	
	//seed
	srand(time(NULL));	
	system("clear");

	//bubble sort	
	printf("Initalizing Bubble sort on the ");

	//input
	for(i = 0; i < size; i = i + 1) {
		array[i] = (rand() %range) + 1;	
	}

	printf("\nOrignal List: [");
	printf("%i", array[0]);
	for(i = 1; i < size; i = i + 1) {
		printf(", %i", array[i]);
	}
	printf("]\n");	

  //Infinate loop until flag is triggered
	while(1) {
    //flag
		sorted = 0;
		//Compare to i to i - 1
		for(i = 0; i < size - 1; i = i + 1) {
			//sorting 
			if(array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sorted = 1;
			}
		}
		if(sorted == 0) {
			break;
		}
	}
	printf("\nSorted List: [");
	printf("%i", array[0]);
	for(i = 1; i < size; i = i + 1) {
		printf(", %i", array[i]);
	}
	printf("]\n");	
}
