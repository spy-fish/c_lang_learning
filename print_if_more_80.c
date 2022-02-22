#include <stdio.h>
#define MAXLINE 1000
#define MORENLINES 80

int getthisline(char str[], int);

int main()
{
    int len;
    char line[MAXLINE];

    while((len = getthisline(line, MAXLINE)) > 0) {
        if ((len-1) > MORENLINES)
            printf("%s\n", line);
        printf("%d\n", len);
    }
}

// get this line func
int getthisline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
