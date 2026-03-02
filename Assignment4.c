#include<stdio.h>

int main(){
    float a,b,c;
    printf("enter the sides of the triangle:");
    scanf("%f %f %f", &a, &b, &c);
    if(a==b && b==c){
        printf("equilateral\n");
    }
    if (a==b || b==c || a==c){
        printf("It is an isosceles triangle\n");}
    if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
        printf("The Triangle is right angled. \n");}
    
    if (a!=b && b!=c && c!=b ){
    printf("The triangle is scalene. \n");}
return 0;
    
    
}




