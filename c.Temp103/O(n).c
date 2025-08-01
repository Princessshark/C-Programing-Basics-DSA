#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
    clock_t start = clock();    // Start Timer

    long int i, size;
    
    puts("How many numbers do you want me to count? : ");
    scanf(" %i", &size);

    for(i = 0; i < size; i = i + 1) {
        printf("Enter %i index: \n", i);
    }
    system("clear");

    clock_t stop = clock();        // Stop Timer
    double total_time = (double)(stop - start) / CLOCKS_PER_SEC;

    printf("\nTo count = %i numbers, it took me %f seconds\n", size, total_time);
}

