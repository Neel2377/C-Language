#include <stdio.h>

int main()
{
    char Str1[100];
    int i;

    printf("Enter any string: ");
    gets(Str1);
    
    for (i = 0; Str1[i]!='\0'; i++)
    {
        if(Str1[i] >= 'A' && Str1[i] <= 'Z')  
        {
            Str1[i] = Str1[i] + 32; 
        }
    }

    printf("Lowercase string: %s", Str1);

}