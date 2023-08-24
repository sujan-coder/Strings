//write a program in C to input a string and print it
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    printf("Enter the String:\n");
    scanf("%[^\n]s",str);
    printf("\n%s",str);

    return 0;
}
