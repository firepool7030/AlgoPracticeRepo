#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        scanf("%d", &num);
        if (num == 1)
            continue;
        else {
            for (int j = 2; j < num; j++) {
                if (num % j == 0)
                    tmp++;
            }
            if (tmp == 0)
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}