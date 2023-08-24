//Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int count=1,i;
    printf("Enter the  string:\n");
    scanf("%[^\n]s",str);
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
        count++;
    }
    }
    printf("Output:\n%d",count);
    return 0;
}
