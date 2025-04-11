#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    char ar[101] = { 0, }, tmp[4] = { 0, };
    gets(ar);
    int n = strlen(ar), cnt = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] == 'c') {
            if (ar[i + 1] == '=' || ar[i + 1] == '-') {
                cnt++;
                i++;
                continue;
            }
            else {
                cnt++;
                continue;
            }
        }
        if (ar[i] == 'd') {
            if (ar[i + 1] == '-') {
                cnt++;
                i++;
                continue;
            }
            else if (ar[i + 1] == 'z' && ar[i + 2] == '=') {
                cnt++;
                i += 2;
                continue;
            }
        }
        if (ar[i] == 'l' && ar[i + 1] == 'j') {
            cnt++;
            i++;
            continue;
        }
        if (ar[i] == 'n' && ar[i + 1] == 'j') {
            cnt++;
            i++;
            continue;
        }
        if (ar[i] == 's' && ar[i + 1] == '=') {
            cnt++;
            i++;
            continue;
        }
        if (ar[i] == 'z' && ar[i + 1] == '=') {
            cnt++;
            i++;
            continue;
        }
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}