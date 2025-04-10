#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int n;
    while (1) {
        int tmp = 1;
        scanf("%d", &n);
        if (n == -1)
            break;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                tmp += i;
            }
        }
        if (tmp == n) {
            printf("%d = 1", n);
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    printf(" + %d", i);
                }
            }
        }
        else {
            printf("%d is NOT perfect.", n);
        }
        printf("\n");
    }
    return 0;
}