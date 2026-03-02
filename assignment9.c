#include<stdio.h>
int main(){
    int i, size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements of array:");

    for(i=0;i<size;i++){
        scanf("%d", &a[i]);
    }
    printf("Even Numbers: \n");

    for (i=0; i<size; i++)
    {
        if (a[i]>=0){

            if(a[i]%2==0) printf("%d\n", a[i]);
        }
    }

    printf("Odd Numbers: \n");
    for (i=0; i<size; i++)
    {
        if (a[i]>=0){

            if(a[i]%2!=0) printf("%d\n", a[i]);
        }
    }


    return 0;




}