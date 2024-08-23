#include<stdio.h>


int main() {

	int counter;

	printf("How many numbers do you wish to count: ");
	scanf("%d,", &counter);

	while (counter == counter) {
    	printf("%d", counter);
    	counter = counter + 1;
	}


	return 0;
}
