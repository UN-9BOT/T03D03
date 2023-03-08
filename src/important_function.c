#include <math.h>
#include <stdio.h>

float foo(float);
int main(void) {
    float a;

    if (scanf("%f", &a) == 1) {
        printf("%.1f", foo(a));
    } else {
        printf("n/a");
    }
    return (0);
}

float foo(float a) {
    float nm = ((22.8 * pow(a, ((float)1) / 3)) - 1e3 * a + 3) / (a * a / 2);
    return (7e-3 * pow(a, 4) + nm - a * pow((10 + a), 2 / a) - 1.01);
}
