#include <stdio.h>
#define MAXLINE 1000

int getlineMyVer(char line[], int maxline);
void copy(char to[], char from[]);

int main() {

    int length;
    int maxLength;

    char line[MAXLINE];
    char longestLine[MAXLINE];

    maxLength = 0;

    /* Loop until `EOF`. Even '\n' is counted as length 1. */
    while ((length = getlineMyVer(line, MAXLINE)) > 0) {
        /* Update `length` */
        if (length > maxLength) {
            maxLength = length;
            /* copy content of `line` into `longestLine` */
            copy(longestLine, line);
        }
    }

    if (maxLength > 0) {
        printf("%s", longestLine);
    }

    return 0;
}

/* getline: read a line into `line`, return length of it */
int getlineMyVer(char line[], int limit) {
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

/* copy: copy `from` into `to`; assume to is big enough  */
void copy(char to[], char from[]) {
    int i = 0;

    /* 2 things will be done in () */
    /* 1st. to[i] = from [i] */
    /* 2nd. to[i] != 0 */
    /* To copy to[i] = '\0', 1st needs to be done. */
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
