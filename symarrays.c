#include <stdio.h>
#define MAXLINE 10

int getthisline(char str[] , int);
void copy(char to[], char from[]);

/*
main version 2

Переписал main предыдущей программы чтобы она могла
печатать самую длинную строку без каких-либо
ограничений на ее размер
*/
int main()
{
    int len, max, c;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    
    while ((len = getthisline(line, MAXLINE)) > 0) {
        if (line[len-1] != '\n')
            while ((c = getchar()) != EOF && c != '\n')
                ++len;

        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max < MAXLINE)
        --max;

    if (max > 0)
        printf("%s", "longest line: ");
        printf("%s\n", longest);
    
    return 0;
}

// читает строку в массиве символов s и возвращает длину
int getthisline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == 'n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// функция cope копирует из to во from, она ничего не возвращает
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
