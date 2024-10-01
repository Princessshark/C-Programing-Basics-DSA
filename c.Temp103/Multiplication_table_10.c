#include<stdio.h>



int main() {
	int input, sum;

	printf("Enter Input: ");
	scanf("%d", &input);

	for (int index = 0; index <= 10; index = index + 1) {
		sum = input * index;
		printf("%d X %d = %d\n", input, index, sum);
	
	}  




	return 0;
}

