//Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    printf("Reversd string:\n%s",strrev(str));
    return 0;
}
