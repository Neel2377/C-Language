#include<stdio.h>

int main()
{
    int a[50], b[50], c[50], size, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter array A's elements: \n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter array B's elements: \n");
    for (i = 0; i < size; i++)
    {
        printf("b[%d]= ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Sum of A and B (Array C): \n");
    for (i = 0; i < size; i++)
    {
        printf("c[%d]= %d\n", i, c[i]);
    }
}
