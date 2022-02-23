#include <stdio.h>
#define MAXLINE 1000

void reverse(char str[]);
int getthisline(char str[], int);

int main()
{
    int len;
    char line[MAXLINE];

    while((len = getthisline(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s\n", line);
    }
}

// reverse func
void reverse(char s[])
{
    int i, j;
    char temp;

    for (i = 0; s[i] != '\0'; ++i);
    for (j = i - 1, i = 0; j > i; --j, ++i) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    s[j + i + 1] = '\0';
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
