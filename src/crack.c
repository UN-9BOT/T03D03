#include <stdio.h>

int main(void) {
    float x, y, res;

    if ((scanf("%f %f", &x, &y) == 2)) {
        res = x * x + y * y;
        (res < 25) ? printf("GOTCHA") : printf("MISS");
    } else {
        printf("n/a");
    }
    return (0);
}
