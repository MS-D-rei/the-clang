#include <stdio.h>

int main() {
    int fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    printf("int size: %lu bytes\n", sizeof(fahrenheit));
    while (fahrenheit <= upper) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("F: %d\tC: %d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }

    return 0;
}
