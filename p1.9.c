#include <stdio.h>

main()
{
    int c, space;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++space;
        else
            space = 0;
        
        if (space == 2) {
            --space;
            putchar('\b');
        }
        putchar(c);
    }
}
