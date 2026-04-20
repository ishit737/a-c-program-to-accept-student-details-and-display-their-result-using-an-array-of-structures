#include <stdio.h>
#include <math.h>

// Prime check using i*i <= n
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Factorial function
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Prime factors function
void primeFactors(int n) {
    printf("Prime factors: ");
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 1)   // remaining prime number
        printf("%d", n);

    printf("\n");
}

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        printf("\n--- MENU ---\n");
        printf("1. Square Root\n");
        printf("2. Square\n");
        printf("3. Cube\n");
        printf("4. Check Prime\n");
        printf("5. Factorial\n");
        printf("6. Prime Factors\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Square root = %.2f\n", sqrt(num));
                break;

            case 2:
                printf("Square = %d\n", num * num);
                break;

            case 3:
                printf("Cube = %d\n", num * num * num);
                break;

            case 4:
                if (isPrime(num))
                    printf("Number is Prime\n");
                else
                    printf("Number is Not Prime\n");
                break;

            case 5:
                printf("Factorial = %lld\n", factorial(num));
                break;

            case 6:
                primeFactors(num);
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

    return 0;
}