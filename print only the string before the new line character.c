//Write a program in C to print only the string before the new line character.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    char s[]="The book\n on the table";
    printf("String before new line character is:\n");

    while(isprint(s[i]))
    {
        putchar (s[i]);
        i++;
    }


    return 0;
}
