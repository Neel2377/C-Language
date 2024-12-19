#include<stdio.h>

int main()
{
    int i=10;
    printf("\n");
    printf("while loop: ");
    while(i >= 1){
        printf("%d ",i);
        i--;
    }

    printf("\n");

    i=10;
     printf("\nfor loop: ");
     for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");

    i=10;
     printf("\ndo while loop: ");
      do {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    
} 
