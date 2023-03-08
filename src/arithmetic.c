#include <stdio.h>

int sum(int, int);
int diff(int, int);
int prod(int, int);
int div(int, int);

int main(void) {
    float a, b;

    if ((scanf("%f %f", &a, &b) == 2) && ((int)a == a && (int)b == b)) {
        printf("%i %i %i ", sum(a, b), diff(a, b), prod(a, b));
        (b != 0) ? printf("%i", div(a, b)) : printf("n/a");
    } else {
        printf("n/a");
    }
}

int sum(int a, int b) { return (a + b); }
int diff(int a, int b) { return (a - b); }
int prod(int a, int b) { return (a * b); }
int div(int a, int b) { return (a / b); }
