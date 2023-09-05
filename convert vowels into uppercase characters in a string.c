//Write a C program to convert vowels into uppercase characters in a string.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char str[50],v[50],c[50];
    int i,j,k,l;
    printf("Enter the string:\n");
    scanf("%[^\n]",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
         if (str[i] == 'a' || str[i] == 'e'
            || str[i] == 'i' || str[i] == 'o'
            || str[i] == 'u')
            {
            str[i] = str[i] - 'a' + 'A';
            }
    }
    printf("%s",str);
    return 0;
}


//OR



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char s[50],v[50],c[50];
    int i,j=0,k=0;
    printf("Enter the string:\n");v
    scanf("%[^\n]", s);
    for(i=0;s[i]!='\0';i++)
    {
        char cnt=s[i];
        if((s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'))
        {
        s[i]=toupper(cnt);
        }
        }
        printf("Output:\n%s", s);
        return 0;
    }



