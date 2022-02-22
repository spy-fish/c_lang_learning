#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("%s", "\\t");
        }
        if (c == '\b') {
            printf("%s", "\\b");
        }
        if (c == '\\') {
            printf("%s", "\\\\");
        }
        if (c != '\t' && c != '\b' && c != '\\')
            putchar(c);
    }
}
