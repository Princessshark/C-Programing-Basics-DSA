#include<stdio.h>

int main() {

	int num;

	printf("give random number: ");
	scanf("%d", &num);

	num > 9 && num < 100 ? printf("2 digit number\n") : printf("Not a 2 digit number\n");

	return 0;
}
