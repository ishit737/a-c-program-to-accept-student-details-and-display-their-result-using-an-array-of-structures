#include<stdio.h>

void main() {

float basic, hra, ta, gs, pt, nt;
printf("Enter basic salary=");
scanf("%f", &basic);
hra= basic*0.1;
ta= basic*0.05;
gs= basic+hra+ta;
pt=gs*0.02;
nt=gs-pt;
printf("\n Basic Salary=%f",basic );
printf("\n HRA=%f",hra );
printf("\n TA=%f",ta );
printf("\n Gross Salary=%f",gs );
printf("\n Professional Salary=%f",pt );
printf("\n Net Salary=%f",nt );



}