#include<stdio.h>


void input(), convert();
float n;

int main() {
	input();
	convert();
return 0;
}

void input() {
	printf("Enter Temperature in Celsius: ");
	scanf("%f", &n);
}

void convert() {
	float fahrenheit = n * (9.0/5.0) + 32;
	printf("%f Degree Celsius is = %f Fahrenheit\n", n, fahrenheit);


}
