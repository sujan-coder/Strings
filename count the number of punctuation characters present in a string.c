//Write a program in C to count the number of punctuation characters present in a string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    int i,count=0,l;
    printf("Enter the string elements:\n");
    scanf(" %[^\n]",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if ((s[i] >= 33 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126))
        {
            count++;
        }
    }
    printf("Number of punctuation characters present in a string: %d",count);
    return 0;
}
