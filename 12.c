#include<stdio.h>

int main(){
    int a,b,i,smallestdivisor=0,gcd;

    printf("enter two numbers");
    scanf("%d %d",&a,&b);

    if(a<1 || b<1)
    printf("there are no smallest divisor for a no less than 1");

    else{
        for(i=0;i<=a && i<=b;i++){
          if(a%i==0 && b% i==0){
                smallestdivisor=i;
                break;
            }
        }

    }
    if(smallestdivisor!=0){
        printf("the smallest common divisor is %d",smallestdivisor);
    }
    else
    printf("no common divisor other than 1");

    for(i=0;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;

        }
    }
    printf("the greatest common divisor of the no %d and %d is %d",a,b,gcd);

    
return 0;

