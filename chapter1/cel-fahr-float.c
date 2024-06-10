#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        printf("C: %3.0f\tF: %6.3f\n", celsius, fahrenheit);
        celsius += step;
    }

    return 0;
}
