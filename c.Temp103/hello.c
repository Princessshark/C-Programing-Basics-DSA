#include<stdio.h>

int main() {
	int input;

	printf("Enter Input: ");
	scanf("%d", &input);

	for (int index = 0; index <= input - 1; index = index + 1) {
			printf("Hello again!\n");
	}
	return 0;
}
