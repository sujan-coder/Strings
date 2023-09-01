//Write a program in C to check whether a character is a Hexadecimal Digit or not.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s;
    printf("Enter the string:\n");
    scanf("%c",&s);
    if(isxdigit(s))
    {
        printf("%c is Hexadecimal\n",s);
    }
      else
        printf("%c is not Hexadecimal\n",s);
    return 0;
}


