#include<stdio.h>


int main() {
    
int x = 2;
int y = 4;

printf("0 = False, 1 = True. \n");        
printf("2 == 4 %d \n", x == y);    
printf("2 != 4 %d \n", x != y);
printf("2 < 4 %d \n", x < y);	 
printf("2 > 4 %d \n", x > y);

printf("with Not !(2 > 4) Operator %d \n", !(x > y));
printf("Withought Not !(!(2 > 4)) Operator %d \n", !(!(x > y)));

return 0;
}
