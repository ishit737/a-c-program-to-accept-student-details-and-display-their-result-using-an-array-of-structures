#include<stdio.h>
#include<math.h>

int main(){
    int decimal=0,i,rem;
    int binary;

    printf("enter a binary number",&binary);

    for(i=0;binary!=0;i++){
        rem=binary % 10;
        decimal=decimal +rem*pow(2,i);
        binary=binary/10;
    }
    printf("decimal number is %d",decimal);

    return 0;
