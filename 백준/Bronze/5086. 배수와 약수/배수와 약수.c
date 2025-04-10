#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int n, m;
    while (1) {
        scanf("%d %d", &n, &m);
        if (m == 0 && n == 0)
            break;
        if (m % n == 0) {
            printf("factor\n");
        }
        else if (n % m == 0) {
            printf("multiple\n");
        }
        else {
            printf("neither\n");
        }
    }
    return 0;
}
/*

*/