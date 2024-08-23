#include<stdio.h>


int main() {
   	 
	char day;
	printf("Select day [m,t,w,T,f,s,S]): ");
	scanf("%s", &day);

	switch(day) {

    	case 'm':
        	printf("Monday%d\n", day);
        	break;
    	case 't':
        	printf("Tuesday%d\n", day);
        	break;
    	case 'w':
        	printf("Wenesday%d\n", day);
        	break;
    	case 'T':
        	printf("Thursday%d\n", day);
        	break;
    	case 'f':
        	printf("Friday%d\n", day);
        	break;
    	case 's':
        	printf("Saturday%d\n", day);
        	break;   	 
    	case 'S':
        	printf("Sunday%d\n", day);
        	break;
    	default :
        	printf("Invalid symbol\n");

    
	}

	return 0;

}
