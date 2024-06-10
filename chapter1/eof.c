#include <stdbool.h>
#include <stdio.h>

int main() {
    printf("EOF: %d\n", EOF);

    int keyboardInput = getchar();
    printf("Input in char: %c\n", keyboardInput);
    printf("Input in ASCII: %d\n", keyboardInput);

    bool isEOF = keyboardInput == EOF;
    printf("isEOF: %d\n", isEOF);

    return 0;
}
