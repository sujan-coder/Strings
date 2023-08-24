//Write a program in C to compare two strings without using string library function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20],str2[20];
    int flag=1,i=0;
    printf("Enter the string 1:\n");
    scanf("%s",str1);
    printf("Enter the string 2:\n");
    scanf("%s",str2);
    while(str1[i]!='\0'|| str2[i]!='\0')
    {
    if(str1[i]!=str2[i])
    {
    flag=0;
    }
    i++;
    }
    if(flag)
    {
        printf("Strings are same");
    }
    else
        printf("Diferent strings");
    return 0;
}
