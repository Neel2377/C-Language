#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
    char St1[50],St2[50];
    int i;

    printf("Enter your email: ");
    gets(St1);
    printf("Enter your password: ");
    gets(St2);


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

    if ((St1) == 0 && (St2) == 0)
    {
        printf("Login successful...\n");
    }
    else
    {
        printf("Invalid username or password...\n");
    }

}