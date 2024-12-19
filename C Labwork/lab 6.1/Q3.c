#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    
    while(i <= n)
    {
        printf("%d ", i);
        i++;
    }
    
    printf("\n");
    
    i = 1;
    for (i = 1; i <= n; i++)
        printf("%d ", i);
        
    printf("\n");
      
	i = 1;    
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);
}
