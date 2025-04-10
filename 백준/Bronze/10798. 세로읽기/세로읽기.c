#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int max = 0;
    char ar[5][16];
    for (int i = 0; i < 5; i++) {
        gets(ar[i]);
        if (strlen(ar[i]) > max)
            max = strlen(ar[i]);
    }
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < strlen(ar[j])) {
                printf("%c", ar[j][i]);
            }
        }
    }
}