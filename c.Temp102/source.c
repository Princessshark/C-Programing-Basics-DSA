#include<stdio.h>

int main() {
	printf("Numbers are not interprated by C automatically, ");
	printf("unlike \'Characters\', to output a Numbers in the console we will use the fllowing syntex in our source code.\n");
	printf("specify the FORMAT SPECIFIER and Number seperatly\n");

	printf("\n");

	printf("Whole Number Format Specifier: \"%%");
	printf("d\", wholeNumber\n");
	printf("EXAMPLE: ");
	printf("%s = %d\n", "wholeNumber",  96);
	
	printf("\n");

	printf("Decimal Number Format Specifier: \"%%");
	printf("f\", decimalNumber\n");
	printf("EXAMPLE: ");
	printf("%s = %f\n", "decimalNumber", 96.9669);

	return 0;
}
