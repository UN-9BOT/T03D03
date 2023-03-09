#include <stdio.h>

int main(void) {
    float x, y, res;
    char tr;

    if ((scanf("%f %f%c", &x, &y, &tr) == 3) & (tr == '\n')) {
        res = x * x + y * y;
        (res < 25) ? printf("GOTCHA") : printf("MISS");
    } else {
        printf("n/a");
    }
    return (0);
}
