                             
 // String length
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Enter the characters:\n");
    scanf("%s",str);
    int len=strlen(str);
    printf("op=%d",len);
    return 0;
}




// merge string
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    printf("Enter the characters 1:\n");
    scanf("%s",str1);
     printf("Enter the characters 2:\n");
     scanf("%s",str2);
    printf("op= %s",strcat(str1,str2));
    return 0;
}


//string compare
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    printf("Enter the characters 1:\n");
    scanf("%s",str1);
     printf("Enter the characters 2:\n");
     scanf("%s",str2);
     if(strcmp(str1,str2)==0)
     {
     printf("True");
     }
     else{
        printf("false");
     }
    return 0;
}


//string reverse
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[20];
    printf("Enter the characters :\n");
    scanf("%s",str1);
    printf("Op= %s",strrev(str1));

    return 0;
}


//string to upper case & lower case
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[20];
    printf("Enter the characters :\n");
    scanf("%[^\n]s",str1);
    printf("upper= %s\n",strupr(str1));
    printf("lower= %s",strlwr(str1));

    return 0;
}


//String copy

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[20],dest[20];
    printf("Enter the characters :\n");
    scanf("%s",str);
    strcpy(dest,str);
    printf("coiped string :%s",dest);

    return 0;
}



//String length without string functn

#include <stdio.h>
#include <stdlib.h>
int len(char *s)
{
    int count=0;
    while(*s!='\0')
    {
        count++;
        s++;
    }
return count;
}

int main()
{
    char str[20];
    printf("Enter the characters:\n");
    scanf("%s",str);
    int p=len(str);
    printf("Length of a string=%d",p);
    return 0;
}








