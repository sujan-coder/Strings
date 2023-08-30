//Write a program in C to count the total number of vowels or consonants in a string
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[1000];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    count(str);

    return 0;
}

int count(char *s)
{
    int i,v=0,c=0,space=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U')
        {
            v++;
        }
        else if(s[i]==' ')
        {
            space++;
        }
        else{
            c++;
        }
       i++;

    }
    printf("%d Vowels\n%d Consonents",v,c);
}
