#include <stdio.h>

int main(){
    int n,i,fact;
    fact = 1;
   
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for( i = 1 ; i <= n ;i++){
        fact*=i;
    }
    printf("Factorial is: %d ",fact);
    
}