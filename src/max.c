#include <stdio.h>

int max(int, int);
int main(void) {
    int a, b;
    char x;

    if ((scanf("%i %i%c", &a, &b, &x) == 3) &&  (x == '\n')) {
        printf("%i", max(a, b));
    } else {
        printf("n/a");
    }
    return (0);
}

int max(int a, int b) { return ((a >= b) ? a : b); }
