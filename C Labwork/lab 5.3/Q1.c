#include<stdio.h>

int main()
{
    int A;
    int B;
    int C;
    printf("Enter the first_number: ");
    scanf("%d",&A);
    printf("Enter the second_number: ");
    scanf("%d",&B);
    printf("Enter the third_number: ");
    scanf("%d",&C);

    (A < B) ?
        (A < C) ? printf("Minimum Number is: %d",A) : printf("Minimum Number is: %d",C)
        :
        (B < C) ? printf("Minimum Number is: %d",B) : printf("Minimum Number is: %d",C);

}