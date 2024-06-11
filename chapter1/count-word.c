#include <stdio.h>

int main() {
    int c, newLine, newWord, newChar, state;
    int inWord = 0;
    int outWord = 1;

    state = outWord;

    // An assignment is an expression with the value and
    // assignments associated from right to left.
    // This is as if we had written as below.
    // nl = (nw = (nc = 0));
    newLine = newWord = newChar = 0;

    while ((c = getchar()) != EOF) {
        ++newChar;
        if (c == '\n') {
            ++newLine;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = outWord;
        } else if (state == outWord) {
            state = inWord;
            ++newWord;
        }
    }
    printf("line count: %d\n", newLine);
    printf("char count: %d\n", newChar);
    printf("word count: %d\n", newWord);

    return 0;
}
