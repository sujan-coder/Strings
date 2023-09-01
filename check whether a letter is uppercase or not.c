//Write a program in C to check whether a letter is uppercase or not.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char s;
    printf("Enter the string:\n");
    scanf("%c",&s);

    if(s>='a' && s<='z')
    {
        printf("Lower case");
    }
    else if(s>='A' && s<='Z')
    {
        printf("Upper case");
    }
    else
    {
        printf("Not an Alphabet");
    }


    return 0;
}
