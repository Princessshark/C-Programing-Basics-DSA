#include<stdio.h>

int main() {

	int height;
	float weight, sum, bmi;



	printf("What is your height IN CM: ");
	scanf("%d", &height);

	printf("What is your Weight In KG: ");
	scanf("%f", &weight);


	sum = weight / (height * height);
	bmi = sum * 10000;

	printf("You Body Mass Index: %f \n", bmi);    

	return 0;
}
