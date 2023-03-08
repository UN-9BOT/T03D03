#include <stdio.h>

int main(void) {
    float x, y, res;

    scanf("%f %f", &x, &y);
    res = x * x + y * y;
    (res < 25) ? printf("GOTCHA") : printf("MISS");
    return (0);
}
