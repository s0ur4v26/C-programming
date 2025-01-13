#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define N 40                

int main() {
    // Declare matrices and variables
    int A[N][N], B[N][N], product[N][N];
    int i, j, k, arows, acolumns, brows, bcolumns, sum = 0;

    // Change console text and background color
    system("color 70");

start:
    // Input rows and columns for Matrix A
    printf("Input the number of rows of MATRIX A: ");
    scanf("%d", &arows);
    printf("\n");
    printf("Input the number of columns of MATRIX A: ");
    scanf("%d", &acolumns);
    printf("\n");

    // Input elements of Matrix A
    printf("Input all the elements of MATRIX A:\n");
    printf("------------------------------------------------------\n");
    for (i = 0; i < arows; i++) {
        for (j = 0; j < acolumns; j++) {
            printf("Input the element of [%d,%d] --> ", (i + 1), (j + 1));
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // Input rows and columns for Matrix B
    printf("Input the number of rows of MATRIX B: ");
    scanf("%d", &brows);
    printf("\n");
    printf("Input the number of columns of MATRIX B: ");
    scanf("%d", &bcolumns);
    printf("\n");

    // Input elements of Matrix B
    printf("Input all the elements of MATRIX B:\n");
    printf("------------------------------------------------------\n");
    for (i = 0; i < brows; i++) {
        for (j = 0; j < bcolumns; j++) {
            printf("Input the element of [%d,%d] --> ", (i + 1), (j + 1));
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");

    // Check if the matrices can be multiplied
    if (acolumns != brows) {
        printf("Sorry, these two matrices cannot be multiplied together.\n");
        printf("[Matrix multiplication rule: Columns of A must match Rows of B]\n");
    } else {
        // Perform matrix multiplication
        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                sum = 0;
                for (k = 0; k < acolumns; k++) {
                    sum += A[i][k] * B[k][j];
                }
                product[i][j] = sum;
            }
        }

        // Print the resultant matrix
        printf("\n\n\n");
        printf("Printing the resultant MATRIX:\n");
        printf("--------------------------------------\n");

        for (i = 0; i < arows; i++) {
            for (j = 0; j < bcolumns; j++) {
                // Align single-digit and multi-digit numbers
                if (product[i][j] < 10) {
                    printf("(%d)", product[i][j]);
                    printf("      ");
                } else {
                    printf("(%d)", product[i][j]);
                    printf("    ");
                }
            }
            printf("\n\n");
        }
    }

    // Exit or restart the program
    printf("\n\n\nPress any key to exit the program.\n\n");
    goto start;

    getch(); // Wait for user input before exiting
}
