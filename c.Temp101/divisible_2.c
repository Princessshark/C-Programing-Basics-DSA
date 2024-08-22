#include<stdio.h>

int main() {

	int divisor, dividend, remainder;
    
	divisor = 2;

	printf("Check Odd OR Even..?\n");
	printf("Input your Number: ");
	scanf("%d", &dividend);
    
	remainder = dividend % divisor;


	if (remainder == 0) {
    
    	printf("%d is an Even Number. \n", dividend);
    
	}

	else {
    
    	printf("%d is an Odd Number. \n", dividend);

	}

	return 0;
}

