#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    printf("%lld", n + m + k);

    return 0;
}