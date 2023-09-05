// Write a C program to count each character in a given string
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int i,j,k,cnt=0,l;
    printf("Enter the string:\n");
    scanf("%[^\n]", s);
     printf("Count of each character:\n");
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
        cnt=1;
        if(s[i])
        {
            for(j=i+1;j<=l;j++)
            {
                if(s[i]==s[j])
                {
                    cnt++;
                    s[j]='\0';
                }
            }
             printf("%c=%d\n",s[i],cnt);
        }
    }


    return 0;
}
