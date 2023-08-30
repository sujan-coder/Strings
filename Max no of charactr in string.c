//Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter the string:\n");
    scanf("%[^\n]s",&str);
    int max=0;
    int current=1;
    char maxchar=str[0];
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]==str[i-1])
        {
            current++;
        if(current>max)
        {
            max=current;
            maxchar=str[i];
        }

    }
    else
    {
        current=1;
    }
    }
    printf("maximum number of characters:%c:%d",maxchar,max);


    return 0;
}

