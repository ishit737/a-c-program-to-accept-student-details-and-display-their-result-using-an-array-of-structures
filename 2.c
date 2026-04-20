#include<stdio.h>

int main(){
    int a,b;
    printf("enter the num a");
    scanf("%d", &a);

    printf("enter the num b");
    scanf("%d", &b);

    printf("%d is the sum", a+b);
    printf("%d is the difference", a-b);
    printf("%d is the product", a*b);
    printf("%d is the divison", a/b);

    return 0;

}