#include<stdio.h>

int main()
{
    int ar[50],size,i;
    int cnt = 0;

    printf("enter size of array: ");
    scanf("%d",&size);

    for (i=0;i<size;i++)
    {
        printf("ar[%d]= ",i);
        scanf("%d",&ar[i]);   
        cnt++;
    }

    printf("length of array elements: %d\n",cnt);
}