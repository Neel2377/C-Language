#include <stdio.h>

int main()
{
    int i=2,n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    do {
        if(i >= n) break; 
        printf("%d\n", i);
        i = i + 2; 
    } while(i);
    
}
