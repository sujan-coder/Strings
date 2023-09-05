// Write a program in C to check whether a character is a digit or not.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,l;
    char s=0;
    printf("Enter the string:\n");
    scanf("%s",&s);
    if(s>='0' && s<='9')
    {
        printf("%c is a Digit",s);

    }
    else printf("%c not a Digit",s);

    return 0;
}
