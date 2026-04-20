#include<stdio.h>

int main(){
    int num,digit,temp;
    int sum;

    printf("enter the number");
    scanf("%d\n", &num);

    
    temp=num;
    
    while(num>0){
        digit=temp %10;
        sum=sum +(digit*digit*digit);
        temp=temp/10;           

    }
    if (sum==num)
       printf("its a armstrong number\n");

    else
      printf("it is not a armstrong number\n");

    return 0;
}