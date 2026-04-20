#include<stdio.h>

int factorial(int n);
int i,n,x;
int fact=1;
int factorial_rec(int x);

int main(){
    printf("enter the numuber: ");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,factorial(n));

     printf("enter the numuber: ");
    scanf("%d",&x);
    printf("the factorial of %d is %d",x,factorial_rec(x));

    return 0;
}

int factorial(int n){
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int factorial_rec(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x*factorial_rec(x-1);
    }
    
}