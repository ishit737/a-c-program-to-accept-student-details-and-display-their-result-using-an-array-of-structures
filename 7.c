#include<stdio.h>

 struct student{
    char name[50];
    int roll;
    float m1,m2,m3;
    float total,percentage;
 };

 int main(){
    struct student s[50];
    int n,i,found=0,searchroll;

    printf("enter the no of student ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter the details of student %d",i+1);

        printf("name: ");
        scanf("%s",s[i].name);

        printf("roll no: ");
        scanf("%d",s[i].roll);

        printf("the marks obtained in 3 subjects");
        scanf("%f %f %f",s[i].m1,s[i].m2,s[i].m3);

        s[i].total= s[i].m1 +s[i].m2 +s[i].m3;

        s[i].percentage=s[i].total/3;

        for(i = 0; i < n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll: %d", s[i].roll);
        printf("\nTotal: %.2f", s[i].total);
        printf("\nPercentage: %.2f", s[i].percentage);

        if(s[i].percentage >= 40)
            printf("\nResult: Pass\n");
        else
            printf("\nResult: Fail\n");
    }

    }
       /*to obtain student details by roll no*/
       printf("enter the roll no of the student");
       scanf("%d",&searchroll);

       for(i=0;i<n;i++){searchroll){
             printf("\n--- Student Found ---\n");
            printf("Name: %s\n);
        if(s[i].roll==searchroll", s[i].name);
            printf("Roll: %d\n", s[i].roll);
            printf("Total: %.2f\n", s[i].total);
            printf("Percentage: %.2f\n", s[i].percentage);

            if(s[i].percentage>=40)
            printf("result:pass\n");
            else
            printf("result\n");

            found=1;
            break;
        }
       }
       if(found==0){
        printf("student not found\n");
       }
       return 0;
 }