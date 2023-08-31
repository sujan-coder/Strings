//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char s[50],p[50];
    printf("Enter the string\n");
    scanf("%[^\n]s",&s);
    upr(s);
    printf("upper case:%s\n",s);
    lwr(s);
    printf("lower case:%s",s);
    return 0;
}

int upr(int s)
{
    strupr(s);
    return s;
}

int lwr(int s)
{
    strlwr(s);
    return s;
}
