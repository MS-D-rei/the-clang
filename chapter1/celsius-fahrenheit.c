#include <stdio.h>

int main() {
    int fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (9 * celsius + 160) / 5;
        printf("C: %d\tF: %d\n", celsius, fahrenheit);
        celsius += step;
    }

    return 0;
}
