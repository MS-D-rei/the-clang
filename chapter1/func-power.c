#include <stdio.h>

/* Function prototype (Forward declaration) */
/* This can be `int power(int, int)` */
int power(int number, int power);

int main() {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

int power(int base, int power) {
    int output = 1;

    for (int i = 1; i <= power; ++i) {
        output = output * base;
    }

    return output;
}
