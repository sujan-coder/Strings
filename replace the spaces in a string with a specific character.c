//Write a program in C to replace the spaces in a string with a specific character.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    char r;
    int i;
    printf("Entr the string elements:\n");
    scanf(" %[^\n]s",s);
    printf("enter the character to be replaced:\n");
    scanf(" %c",&r);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
          s[i]=r;
        }

    }
    printf("\n%s\n",s);
    return 0;
}
