#include <stdio.h>

/* Function prototype (Forward declaration) */
/* This can be `int power(int, int)` */
int power1(int number, int power);
int power2(int number, int power);

int main() {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power1(2, i), power1(-3, i));
        printf("%d %d %d\n", i, power2(2, i), power2(-3, i));
    }

    return 0;
}

/* power1: rase base to n-th power; n >= 0 */
int power1(int base, int power) {
    int output = 1;

    for (int i = 1; i <= power; ++i) {
        output = output * base;
    }

    return output;
}

/* In this way, no need to use `i` */
int power2(int base, int power) {
    int output = 1;

    for (; power > 0; --power) {
        output = output * base;
    }

    return output;
}
