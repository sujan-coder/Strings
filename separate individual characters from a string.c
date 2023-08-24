//Write a program in C to separate individual characters from a string

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int i;
    printf("Enter the string:\n");
    scanf("%s",str);
    printf("Individual charactter:\n");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}
