#include <stdio.h>

int recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * recursive(n - 1);
}


int iterative(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial using recursion: %d\n", recursive(num));
        printf("Factorial using iteration: %d\n", iterative(num));
    }

    return 0;
}
