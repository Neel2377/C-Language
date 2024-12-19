#include <stdio.h>
#include <conio.h>

int main(){

    printf("Start of Program 1 \n\n\n");
    const float PI = 3.14;
    int r;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    int area = PI*(r*r);
    printf("Area of the circle is: %d\n\n",area);
}