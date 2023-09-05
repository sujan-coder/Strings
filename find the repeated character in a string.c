// Write a C program to find the repeated character in a string.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50],ch,mch;
    int mcnt=0,cnt,i,j;
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    mch='\0';
    for(i=0;s[i]!='\0';i++)
    {
        ch=s[i];
        cnt=0;
        for(j=0;s[j]!='\0';j++)
        {
          if(s[j]==ch)
          {
              cnt++;
          }
        }
        if(cnt>mcnt)
        {
          mcnt=cnt;
          mch=ch;
        }

    }
    printf("%c Repeated %d times",mch,mcnt);
    return 0;
}

OR

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  // Include ctype.h for isspace function

int main() {
    char s[50], ch, mch;
    int mcnt = 0, cnt, i, j;

    printf("Enter the string:\n");
    scanf(" %[^\n]", s);  // Add a space before %[^\n] to consume leading whitespace

    mch = '\0';

    for (i = 0; s[i] != '\0'; i++) {
        ch = s[i];
        cnt = 0;

        // Skip spaces
        if (!isspace(ch)) {
            for (j = 0; s[j] != '\0'; j++) {
                if (s[j] == ch && !isspace(ch)) {
                    cnt++;
                }
            }
        }

        if (cnt > mcnt) {
            mcnt = cnt;
            mch = ch;
        }
    }

    if (mch != '\0') {
        printf("%c Repeated %d times\n", mch, mcnt);
    } else {
        printf("No character is repeated\n");
    }

    return 0;
}


