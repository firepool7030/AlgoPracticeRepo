#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//10진법 N, B진법 입력 -> N을 B진법으로 출력

void convert(int n, int m) {

    if (n != 0) {
        convert(n / m, m);
        if (n % m >= 10) { 
            printf("%c", 'A' + n % m - 10);
        }
        else {
            printf("%d", n % m);
        }
        n /= m;
    }

    return;
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    convert(n, m);

    return 0;
}