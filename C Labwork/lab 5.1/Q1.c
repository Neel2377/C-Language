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

  if(A < B){
    if(A < C){
        printf("The minimum value is: ");
        printf("%d",A);
    }else{
        printf("The minimum value is: ");
        printf("%d",C);
    }
  }

  if(B < A){
    if(B < C){
        printf("The minimum value is: ");
        printf("%d",B);
    }else{
        printf("The minimum value is: ");
        printf("%d",C);
    }
  }

}