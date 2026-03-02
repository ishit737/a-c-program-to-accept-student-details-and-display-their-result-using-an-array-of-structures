#include <stdio.h>
#include <math.h>

// Function to calculate square
int square(int n) {
    return pow(n, 2);
}

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice, num;

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (choice) {
        case 1:
            printf("Square of %d: %d\n", num, square(num));
            break;

        case 2:
            printf("Square root of %d: %.2f\n", num, sqrt(num));
            break;

        case 3:
            if (num <= 1) return 0;
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    printf("%d is not a prime number.\n", num);
                    break;
                } else {
                    printf("%d is a prime number.\n", num);
                    break;
                }
            }
            break;

        case 4:
            if (num == 2 || num == 1) {
                printf("Enter numbers other than 1 or 2.\n");
                return 0;
            }

            printf("Non-prime (factors) are: ");
            for (int i = 2; i <= num; i++) {
                if (num % i == 0) {
                    printf("%d ", i);
                }
            }
            printf("\n");
            break;

        case 5:
            printf("Factorial of %d: %d\n", num, factorial(num));
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
