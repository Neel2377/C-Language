#include <stdio.h>

int main()
{
    int ar[50], size, i;
    int sum = 0;

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


    printf("Sum of the array: %d\n", sum);

    return 0;
}
