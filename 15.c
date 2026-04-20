#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,arr[3];

    srand(time(0));

    num=rand()/900 +100;

    printf("random 3 digit number: %d",num);

    arr[0]=num/100;
    arr[1]=(num/10)%10;
    arr[2]=num%10;

    printf("digits stored in a array:\n");
    for(int i = 0;i<3;i++){
        printf("%d",arr[i]);
    }
return 0;
}