#include<stdio.h>
#include<stdlib.h>


void main() {

    int period;
    float balance = 0.00, amount;


    printf("PPF interest Calculator\n");

    
    printf("Enter the No of Contributions: ");
    scanf("%d", &period);

    
    int *contributions = (int*) malloc(period *sizeof(int)); 
    
    for(int i = 0; i < period; i = i + 1) {
    
        printf("Enter Contribution %d amount\n", i + 1);
        scanf("%f", &amount);
        
        contributions[i] = amount;

        balance = balance + amount;
           balance = balance * 1.071;
        
        printf("Balance: %d = %f \n", i + 1, balance);
            
    }


free(contributions);
}







