#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    char letter[101];
    gets(letter);
    int n = strlen(letter);
    for (int i = 0; i < n; i++) {
        if (letter[i] != letter[n - i - 1]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}