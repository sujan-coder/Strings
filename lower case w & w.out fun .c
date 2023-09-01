//Write a program in C to convert a string to lowercase.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    strlwr(s);
    printf("Lower case:%s",s);
    return 0;
}

//without function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[20];
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    for(int i=0;s[i]!='0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }

    }
    printf("lower case:%s",s);
    return 0;
}
