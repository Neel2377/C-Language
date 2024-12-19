#include <stdio.h>

int main(){

   int n;
   printf("Enter n - ");
   scanf("%d",&n);


   while(n>0)
   {
      printf("%d ",n--);
   }   
    
    
    for (; n > 0; n--) {
        printf("%d ", n);
    }
    
    
    do {
        if (n > 0) {
            printf("%d ", n--);
        }
    } while (n > 0);
}


