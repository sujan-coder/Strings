#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    char alp[100];
    int i = 0, j = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]s", s);

    while (s[i] != '\0') {
        if (isalpha(s[i])) {
            alp[j] = s[i];
            j++;
        }
        i++;
    }
    alp[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n", alp);

    return 0;
}
