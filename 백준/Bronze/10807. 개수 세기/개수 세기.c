#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int ar[100] = { 0, }, n, m, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < n; i++) {
        if (ar[i] == m)
            cnt++;
    }
    printf("%d", cnt);

    return 0;
}