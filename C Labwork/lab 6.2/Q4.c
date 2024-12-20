#include <stdio.h>

int main(){
    int a,n,b,temp;
    a=0;
    b=1;
    
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        if (i == 0) { 
            printf("%d ", a); 
        } else if (i == 1) { 
            printf("%d ", b); 
        }else {
            temp = a + b; 
            printf("%d ", temp); 
            a = b; 
            b = temp; 
        }
    }
        printf("\n");
}