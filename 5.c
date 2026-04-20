#include<stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int i, j, r, c, choice;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    do {
        printf("\n1. Addition\n2. Saddle Point\n3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Addition:\n");
                for(i = 0; i < r; i++) {
                    for(j = 0; j < c; j++) {
                        C[i][j] = A[i][j] + B[i][j];
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2: {
                printf("Saddle Point:\n");

                int min, col, count = 0;

                for(i = 0; i < r; i++) {
                    min = A[i][0];
                    col = 0;

                    // find minimum in row
                    for(j = 1; j < c; j++) {
                        if(A[i][j] < min) {
                            min = A[i][j];
                            col = j;
                        }
                    }

                    // check if it is maximum in column
                    for(j = 0; j < r; j++) {
                        if(A[j][col] > min)
                            break;
                    }

                    if(j == r) {
                        printf("Saddle point: %d\n", min);
                        count++;
                    }
                }

                if(count == 0)
                    printf("No saddle point\n");

                break;
            }

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 3);

    return 0;
}