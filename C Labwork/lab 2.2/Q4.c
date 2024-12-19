#include <stdio.h>
#include <conio.h>

int main(){

    printf("Start of program 4\n\n");
    float principal, rate, time, simpleInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("The simple interest is: %.2f\n\n", simpleInterest);
}