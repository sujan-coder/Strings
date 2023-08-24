//Write a program in C to find the length of a string without using library functions
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int i,count=0;
    printf("enter the strings:\n");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of the string is:%d",count);
    return 0;
}
