#include<stdio.h>

int main(){
    float basicpay,HRA,TA,gross,net,tax;
    printf("enter your salary: ");
    scanf("%f", &basicpay);

    HRA = 0.1*basicpay;
    TA = 0.05*basicpay;
    tax = 0.02*gross;

    gross=basicpay + HRA + TA;

    net = gross - tax;

    printf("the salary of employee is 0.2%f ", net);

    return 0;

}