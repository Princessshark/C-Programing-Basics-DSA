#include<stdio.h>

int n;
int sum(int n);
void input();

int main() {
	input();
	printf("Hence Sum of factorial of %d = %d\n", n, sum(n));
return 0;
}


void input() {
	printf("Calculate the factorial for an integer <= 16 using recursion\n");
	printf("Enter integer value: ");
	scanf("%d", &n);
}


int sum(int n) {
	if(1 == n) {
		return 1;
	}
	int temp = sum(n - 1);
	int total = temp * n;	//multiplication
	printf("%d\n", total);
	return total;
}
