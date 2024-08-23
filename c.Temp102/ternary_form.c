#include<stdio.h>

int main() {

	char name[20];
	int age;

	printf("First name: ");
	scanf("%19s", name);



	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Hello %s,\n", name);
	age < 18 ? printf("You are %d years old, and not an adult.\n", age) : printf("Be an responsible adult.\n");



	return 0;
}
