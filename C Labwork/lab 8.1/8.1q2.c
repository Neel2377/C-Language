#include<stdio.h>

int main()
{
    int ar[50], size, i;
    int sum = 0;
    float average;

    printf("Enter size of array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("ar[%d]= ", i);
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + ar[i];
    }

    average = sum / size;
    printf("Average of an array: %.2f\n", average);
}