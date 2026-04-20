#include<stdio.h>


    long long factorial(int n){
        long long fact = 1;
        for(int i=1; i<=n; i++){
            fact*=1;
        }
       return fact;
    }

    int main(){
        int choice;
        int x,y;
        float a,b;

        do{
            printf("\n CALCULATOR \n");
            printf("1. Addition\n");
            printf("2. Substraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Power (x^y)\n");
            printf("6. Factorial (x!)\n");
            printf("7. Exit\n");
            printf("enter your choice: ");
            scanf("%d", &choice);

            switch(choice){
            case 1:
                printf("enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("result = %f\n", a+b);
                break;

            case 2:
                printf("enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("result = %f\n", a-b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("result = %f\n", a*b);
                break;

            case 4:
                printf("enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("result = %f\n", a/b);
                break;

            case 5:
                printf("enter two numbers: ");
                scanf("%f %f", &a, &b);
                if(b!=0)
                   printf("result = %f\n", a/b);
                else
                   printf("divison can't be done");
                   break;

             case 6:
                printf("Enter a number: ");
                scanf("%d", &x);
                if(x >= 0)
                    printf("Factorial = %lld\n", factorial(x));
                else
                    printf("Factorial of negative number not possible\n");
                break;

            case 7:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice\n");

            }
        }while(choice!=7);
        
        return 0;
    }
        
