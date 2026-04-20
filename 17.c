#include<stdio.h>
#include<math.h>

    int main() {
    int n, i;
    float x, sum = 0, term;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int j;
        float fact = 1;

        // calculate factorial of (2*i - 1)
        for(j = 1; j <= (2*i - 1); j++) {
            fact = fact * j;
        }

        term = sign * (pow(x, (2*i - 1)) / fact);
        sum = sum + term;

        sign = -sign;  // alternate sign
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}

