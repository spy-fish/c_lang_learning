#include <stdio.h>

int main()
{
    int c, i, j, nc;
    i = j = nc = 0;
    int dig[20];
    
    // заполнить массив значениями 0
    for (i = 0; i <= 20; ++i)
        dig[i] = 0;

    while ((c = getchar()) != EOF) {
        // колличество букв +1
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t') {
            dig[nc-1]++;
            nc = 0;
        }
        // остановить ввод по *
        if (c == '*')
            break;
    }
    // вывод гистограммы
    for (i = 1; i <= 20; ++i) {
        if (i < 10)
            printf("%d  ", i);
        else
            printf("%d ", i);
        for (j = dig[i]; j > 0; --j)
            printf("#");
        printf("\n");
    }
    printf("\n");
}
