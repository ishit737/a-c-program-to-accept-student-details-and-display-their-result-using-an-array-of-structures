#include <stdio.h>

// Function to take input for a matrix
void inputMatrix(int matrix[10][10], int rows, int cols) {
    int i, j;
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int rows, int cols) {
    int i,o j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int r1, int c1, int c2) {
    int i, j, k;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to find the transpose of a matrix
void transposeMatrix(int matrix[10][10], int transposed[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

// Main function
int main() {
    int mat1[10][10], mat2[10][10], result[10][10], transposed[10][10];
    int rows, cols, choice;

    // Get rows and columns from the user
    printf("Enter the number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    // Input first matrix
    printf("\nMatrix 1:\n");
    inputMatrix(mat1, rows, cols);

    // Menu for operations
    do {
        printf("\nChoose an operation:\n");
        printf("1. Addition\n2. Multiplication\n3. Transpose\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Input second matrix for addition
                printf("\nMatrix 2:\n");
                inputMatrix(mat2, rows, cols);
                
                addMatrices(mat1, mat2, result, rows, cols);
                printf("\nResult of Addition:\n");
                printMatrix(result, rows, cols);
                break;

            
            case 2: {
                // Get new dimensions for multiplication
                int r2, c2;
                printf("\nEnter rows and columns for second matrix (columns of first matrix must match rows of second matrix): ");
                scanf("%d %d", &r2, &c2);
                
                if (cols != r2) {
                    printf("Matrix multiplication not possible! Columns of first must match rows of second.\n");
                    break;
                }
            
                printf("\nMatrix 2:\n");
                inputMatrix(mat2, r2, c2);
                
                multiplyMatrices(mat1, mat2, result, rows, cols, c2);
                printf("\nResult of Multiplication:\n");
                printMatrix(result, rows, c2);
                break;
            }
            

            case 3:
                // Transpose the first matrix
                transposeMatrix(mat1, transposed, rows, cols);
                printf("\nTranspose of the Matrix:\n");
                printMatrix(transposed, cols, rows);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice, please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}