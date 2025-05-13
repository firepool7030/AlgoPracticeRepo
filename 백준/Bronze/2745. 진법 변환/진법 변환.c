#include <stdio.h>
#include <string.h>
#include <math.h>

int charToInt(char ch) {
    if (ch >= '0' && ch <= '9')
        return ch - '0';
    else if (ch >= 'A' && ch <= 'Z')
        return ch - 'A' + 10;
    else
        return -1; // 잘못된 입력일 경우 -1 반환
}

int main(void) {
    char ar[10000];
    int b;

    scanf("%s %d", ar, &b);

    int len = strlen(ar);
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += charToInt(ar[i]) * pow(b, len - i - 1);
    }

    printf("%d\n", sum);

    return 0;
}
