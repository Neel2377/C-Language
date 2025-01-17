#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
    char St1[50];
    int i;

    printf("Enter first string: ");
    gets(St1);

    for (i = 0; St1[i] != '\0'; i++)
    {
        if (St1[i] >= 'a' && St1[i] <= 'z')
        {
            St1[i] = St1[i] - 32;
        }
        else if (St1[i] >= 'A' && St1[i] <= 'Z')
        {
            St1[i] = St1[i] + 32;
        }
    }

    printf("Toggle case string: %s", St1);

}