// Write a program in C to split strings by space into words.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[200];
    char newstring[50][50];
    int c=0,j=0,i;

    printf("Enter the string:\n");
    scanf("%[^\n]", s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            newstring[c][j]='\0';
            c++;
            j=0;
        }
        else{
            newstring[c][j]=s[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i<=c;i++)
    {
        printf(" %s\n",newstring[i]);
    }

    return 0;
}


