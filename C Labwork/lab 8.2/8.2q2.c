#include<stdio.h>

int main()
{
    int ar1[50][50], ar2[50][50], sumMatrix[50][50];
    int row, col, i, j;
    
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("Enter the A's array:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("ar1[%d][%d] = ", i, j);
            scanf("%d", &ar1[i][j]);
        }
    }
    printf("Enter the B's array:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("ar2[%d][%d] = ", i, j);
            scanf("%d", &ar2[i][j]);
        }
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sumMatrix[i][j] = ar1[i][j] + ar2[i][j];
        }
    }
    printf("A's Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", ar1[i][j]);
        }
        printf("\n");
    }
    printf("B's Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", ar2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of A & B Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }
}