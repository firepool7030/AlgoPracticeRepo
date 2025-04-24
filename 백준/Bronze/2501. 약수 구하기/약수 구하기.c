#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int n, m, cnt = 0, num = 0;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
        if (cnt == m) {
            num = i;
            break;
        }
    }
    printf("%d", num);
    return 0;
}