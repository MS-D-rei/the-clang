#include <stdio.h>

// Send `EOF` through the console by hitting
// `Ctrl+D` in Linux.
// `Ctrl+Z` in Windows.

int main() {
    int c, newline;

    newline = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++newline;
        }
    }
    printf("newline count: %d\n", newline);

    return 0;
}
