#include <stdio.h>

int main() {
    int a, b, c, d, e, total;
    float per;

  
    
    printf("Enter marks in a: ");
    scanf("%d", &a);
    printf("Enter marks in b: ");
    scanf("%d", &b);
    printf("Enter marks in c: ");
    scanf("%d", &c);
    printf("Enter marks in d: ");
    scanf("%d", &d);
    printf("Enter marks in e: ");
    scanf("%d", &e);


    total = a + b + c + d + e;
    printf("Total is: %d\n", total);

    per = (total / 500.0) * 100;
    printf("Percentage is: %.2f\n", per);

   
    if (a >= 40 && b >= 40 && c >= 40 && d >= 40 && e >= 40) {
        
        if (per >= 75) {
            printf("Distinction\n");
        } else if (per >= 60 && per < 75) {
            printf("First Division\n");
        } else if (per >= 50 && per < 60) {
            printf("Second Division\n");
        } else if (per >= 40 && per < 50) {
            printf("Third Division\n");
        } else {
            printf("Fail\n");
        }
    } else {
        printf("Fail\n");
    }

    return 0;
}
