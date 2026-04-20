#include<stdio.h>
int array[50];
int i,n,j,temp;

int main(){
    scanf("the no of elements in list: %d",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&array[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    j=n-1;
    i=0;

    while(i<j){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;       
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}

