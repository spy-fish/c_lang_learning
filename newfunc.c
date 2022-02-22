#include <stdio.h>
int plus(int, int);
int minus(int, int);
int mult(int, int);

int main()
{
    printf("%d\n", plus(1, 2));
    printf("%d\n", minus(1, 2));
    printf("%d\n", mult(2, 5));
}

int plus(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}
