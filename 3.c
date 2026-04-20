#include<stdio.h>

int main(){
    int n,i;
    printf("enter the number");
    scanf("%d" ,&n);

    while(i<11){
        printf("%d x %d=%d", n,i,n*i);
        i+=1;

        return 0;
    }

}