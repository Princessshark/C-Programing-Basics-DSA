#include<stdio.h>


int main() {
    
	int x = 2;
	int y = 4;

	printf("0 = False, 1 = True");    
    
	printf("%d \n", x == y || x != y);    
	printf("%d \n", x <= y && x < y);
    
	return 0;
}
