#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("F: %3.0f\tC: %6.3f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }

    return 0;
}
