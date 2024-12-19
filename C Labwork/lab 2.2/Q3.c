#include <stdio.h>
#include <conio.h>

int main(){
    
    printf("Start of program 3\n\n");
    float base, height, areatri;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    areatri = 0.5 * base * height;
    printf("The area of the triangle is: %f\n\n", areatri);
}