//Write a program in C to convert a string to uppercase.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[40];
    printf("Enter the string:\n");
    scanf("%[^\n]s",s);
    strupr(s);
    printf("Upper case:%s",s);
    return 0;
}

// without using function

#include<stdio.h>

int main()
{
    int i;
    char s[100];
    printf("Enter the string:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;        }
    }
    printf("Upper case:");
    puts(s);
    return 0;
}
