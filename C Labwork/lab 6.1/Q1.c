#include<stdio.h>

int main()
{
    int i=1;
    printf("\n");
    printf("while loop: ");
    while(i <= 10){
        printf("%d ",i);
        i++;
    }

    printf("\n");

    i=1;
     printf("\nfor loop: ");
     for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n");

    i=1;
     printf("\ndo while loop: ");
      do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    
} 
