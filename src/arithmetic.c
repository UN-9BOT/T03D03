#include <stdio.h>

int sum(int, int);
int diff(int, int);
int prod(int, int);
int div(int, int);

int main(void) {
    int  a, b;
    char x;

    if ((scanf("%i %i%c", &a, &b, &x) == 3) && (x == '\n')) {
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
