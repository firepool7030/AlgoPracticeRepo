#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    while (n != 1) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                printf("%d\n", i);
                n /= i;
                break;
            }
        }
    }
    return 0;
}