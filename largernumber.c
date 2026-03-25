#include <stdio.h>
 void main(){
    int a,b,c;
    printf("Enter the Two Numbers to be compared: ");
    scanf("%d %d", &a , &b);
    c= a>b ? a:b;
    printf("the largest number between them is : %d ", c);

 }