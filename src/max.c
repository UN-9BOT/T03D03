#include <stdio.h>

int max(int, int);
int main(void) {
    float a, b;
    if ((scanf("%f %f", &a, &b) == 2) && ((int)a == a && (int)b == b)) {
        printf("%i", max(a, b));
    } else {
        printf("n/a");
    }
    return (0);
}

int max(int a, int b) { return ((a >= b) ? a : b); }
