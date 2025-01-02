#include<stdio.h>

int main()
{
    int ar[50][50],row,col,i,j;
    int sum = 0;
    float average;
    
    printf("enter no row: ");
    scanf("%d",&row);
    printf("enter no col: ");
    scanf("%d",&col);

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("ar[%d][%d]= ",i,j);
            scanf("%d",&ar[i][j]);
            sum = sum + ar[i][j];
        }
        
    }
    average = sum / (row * col);
    printf("The average of all elements is: %.2f\n", average);
    
}