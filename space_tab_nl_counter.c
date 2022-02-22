#include <stdio.h>

main()
{
    int c, counter;
    counter = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            ++counter;
            printf("%d\n", counter);
        }
    
    }
}
