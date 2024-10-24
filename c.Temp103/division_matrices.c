#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to allocate memory for an NxN matrix
float** allocateMatrix(int N) {
    float **matrix = (float **)malloc(N * sizeof(float *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (float *)malloc(N * sizeof(float));
    }
    return matrix;
}

// Function to free memory for a matrix
void freeMatrix(float **matrix, int N) {
    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to fill the first row of matrix A with random values
void fillMatrixA(float **matrix, int N) {
    printf("Matrix A (Row Matrix):\n");
    for (int j = 0; j < N; j++) {
        matrix[0][j] = (float)(rand() % 100); // Random values between 0 and 99
    }
}

// Function to fill the first column of matrix B with random values
void fillMatrixB(float **matrix, int N) {
    printf("Matrix B (Column Matrix):\n");
    for (int i = 0; i < N; i++) {
        matrix[i][0] = (float)(rand() % 100); // Random values between 0 and 99
    }
}

// Function to fill the rest of the matrices with user input
void fillRemainingMatrices(float **matrixA, float **matrixB, int N) {
    printf("Fill the remaining elements of Matrix A:\n");
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N; j++) {
            while (1) {
                printf("Input A[%d][%d]: ", i, j);
                if (scanf("%f", &matrixA[i][j]) != 1) {
                    printf("Invalid input. Please enter a numeric value.\n");
                    while (getchar() != '\n'); // Clear invalid input
                } else {
                    break; // Valid input, exit loop
                }
            }
        }
    }

    printf("Fill the remaining elements of Matrix B:\n");
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N; j++) {
            while (1) {
                printf("Input B[%d][%d]: ", i, j);
                if (scanf("%f", &matrixB[i][j]) != 1) {
                    printf("Invalid input. Please enter a numeric value.\n");
                    while (getchar() != '\n'); // Clear invalid input
                } else {
                    break; // Valid input, exit loop
                }
            }
        }
    }
}

// Function to perform division of two matrices and store the result in matrix C
void divideMatrices(float **A, float **B, float **C, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (B[i][j] != 0) {
                C[i][j] = A[i][j] / B[i][j]; // Perform division
            } else {
                printf("Warning: Division by zero at C[%d][%d]. Assigning 0.\n", i, j);
                C[i][j] = 0; // Assign 0 in case of division by zero
            }
        }
    }
}

// Function to print a matrix
void printMatrix(float **matrix, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%0.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;

    // Input size with error handling
    do {
        printf("Enter the size of the matrices (N for NxN, N > 0): ");
        int result = scanf("%d", &N);
        while (getchar() != '\n'); // Clear the input buffer
        if (result != 1 || N <= 0) {
            printf("Invalid input. Please enter a positive integer.\n");
        }
    } while (N <= 0);

    float **A = allocateMatrix(N); // A will be NxN
    float **B = allocateMatrix(N); // B will be NxN
    float **C = allocateMatrix(N); // C will store the result

    // Seed the random number generator
    srand(time(0)); 

    // Fill the first row of Matrix A and first column of Matrix B with random values
    fillMatrixA(A, N);
    fillMatrixB(B, N);

    // Fill the remaining elements of both matrices with user input
    fillRemainingMatrices(A, B, N);

    // Display both matrices
    printf("Matrix A:\n");
    printMatrix(A, N);
    printf("Matrix B:\n");
    printMatrix(B, N);

    // Divide matrices A and B and store the result in C
    divideMatrices(A, B, C, N);

    // Output the result matrix C
    printf("Result Matrix C (A / B):\n");
    printMatrix(C, N);

    // Free allocated memory
    freeMatrix(A, N);
    freeMatrix(B, N);
    freeMatrix(C, N);

    return 0;
}
