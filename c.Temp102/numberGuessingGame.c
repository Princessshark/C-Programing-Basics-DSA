#include<stdio.h>
#include<stdlib.h>    
#include<string.h>
#include<time.h>

void main() {    

    int i, range = 10, random, sum = 0, temp;    
    char guess;
    
    srand(time(NULL));
    
    for(i = 0; i < 3; i = i + 1) {
        
        random = (rand() %range) + 1;
        printf("Random value = %i\n", random);    

        sum = sum + random;
    }
    printf("Guess the next value using these symbols: (L| G | S %i\n", sum);
    scanf(" %c", &guess);

    switch(guess) {
        case 'L' :
        case 'l' :
               temp = (rand() %sum * range) + 1;
               printf("The sum came out to be %i\n", random);
               (guess > temp) ? puts("I See you made it count") : puts("Whats up Sucker");
               break;
        case 'G' :
        case 'g' :
               temp = (rand() %sum * range) + 1;
               printf("The sum came out to be %i\n", random);
               (guess < temp) ? puts("I See you made it count") : puts("Whats up Sucker");
               break;
        case 'S' :
        case 's' :
               temp = (rand() %sum * range) + 1;
               printf("The sum came out to be %i\n", random);
               (temp == guess) ? puts("I See you made it count") : puts("Whats up Sucker");
               break;
        default : puts("Wrong input");
    }
} 
