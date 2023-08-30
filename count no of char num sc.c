. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[1000];
    int a=0,d=0,sp=0,i;
    printf("Enter the string elements:\n");
    scanf("%[^\n]s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            a++;
        else if(str[i]>='0'&& str[i]<='9')
            d++;
        else
            sp++;
    }
    printf("The string consists of:\n");
    printf("%d Alphabets\n%d Digits\n%d Special characters\n",a,d,sp);

    return 0;
}
