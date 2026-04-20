#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    int total_marks;
    int agg_marks;

    printf("enter the marks:\n");
    scanf("%d%d%d%d%d", m1,m2,m3,m4,m5);

    if(m1 >=40 && m2 >=40 && m3>=40 && m4>=40 && m5>=40){

        total_marks=m1+m2+m3+m4+m5;
        agg_marks = (total_marks/500)*100;

    if(agg_marks>=75)
        printf("Grade: Divison\n");
    else if(agg_marks>= 60)
        printf("Grade: First Divison\n");
    else if(agg_marks>=50)
        printf("Grade: Second Divison\n");
    else
       printf("Grade: Third Divison\n");


    }
    else{
        printf("Result: FAIL\n");
    }

    return 0;

}

