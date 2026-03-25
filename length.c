
//the length and breadth of the rectangle and radius of circle are input to keyboard write a prgram to calculate area and perimeter of the rectangle and area and circumfernce of the circle



#include <stdio.h>
void main(){
    float a,b,c;
    float rect_peri, rect_area, circle_area, circle_circum;
    const float PI = 3.14; 
    printf("Enter the two sides and radius of circle:");
    scanf("%f %f %f", &a,&b,&c);

    rect_area = a * b;
    rect_peri = 2 * (a + b);

    circle_area = PI * c * c;
    circle_circum = 2 * PI * c;


    printf("\nRectangle Area: %.2f", rect_area);
    printf("\nRectangle Perimeter: %.2f", rect_peri);
    printf("\nCircle Area: %.2f", circle_area);
    printf("\nCircle Circumference: %.2f\n", circle_circum);




}