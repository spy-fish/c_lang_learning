#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 10

double cel_to_far(int);

int main()
{
    /*
    float fahr, cel;
    int lower, step, upper;
    
    lower = 0;
    step = 10;
    upper = 250;

    printf("%3s %6s\n", "C", "F");
    
    while (cel <= upper) {
        fahr = cel * 1.8 + 32;
        printf("%3.0f %6.1f\n", cel, fahr);
        cel += step;
    } */
    
    int cel;

    for (cel = UPPER; cel >= LOWER; cel -= STEP)
        printf("%3d %6.1f\n", cel, cel_to_far(cel));

    return 0;
}

double cel_to_far(int cel) {
    double fahr;
    fahr = cel * 1.8 + 32;
    return fahr;
}
