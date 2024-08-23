#include<stdio.h>


int main() {
   	 
	int num;
	printf("Number (0 - 5): ");
	scanf("%d", &num);

	switch(num) {

    	case 0:
        	printf("Number%d\n", num);
        	break;
    	case 1:
        	printf("Number%d\n", num);
        	break;
    	case 2:
        	printf("Number%d\n", num);
        	break;
    	case 3:
        	printf("Number%d\n", num);
        	break;
    	case 4:
        	printf("Number%d\n", num);
        	break;
    	case 5:
        	printf("Number%d\n", num);
        	break;   	 
    	default :
        	printf("Number not valid\n");
	}

	return 0;
}
