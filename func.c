#include <stdio.h>
#include <math.h>

int power(int m, int n);
int plus(int firstblya, int secondblya);

int main()
{
    int i;
    for (i = 0; i <= 10; ++i)
        printf("%d\n", power(2, i));
    
    printf("%d\n", plus(1, 2));

    return 0;
}

/* version 1
int power(int base, int n)
{
    int i, p;
    p = 1;
    
    for (i = 1; i <= n; ++i)
        p *= base;
    return p;
} */

// version 2
int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; --n)
        p *= base;
    return p;
}

int plus(int y, int l)
{
    y += l;
    return y;
}
