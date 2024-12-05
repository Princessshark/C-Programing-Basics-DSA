#include<stdio.h>

int n, temp = 0, cal();
void input(); 

int main() {
	input();
	cal();
return 0;
}

void input() {
	printf("Enter the number of Even you need: ");
	scanf("%d", &n);
}

int cal() {
	if (n < 1) {
		printf("Invalid Input\n");
		return 0;
	} else {
		for (int i = 1; i < n * 2; i = i + 1) {
	
			if (i % 2 == 0) {
				printf("EVEN = %d \n", i);
				temp = temp + i;		
			}
		}
	}
	printf("Sum of EVEN = %d\n", temp);
	
}
