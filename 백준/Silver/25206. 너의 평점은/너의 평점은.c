#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    double sum = 0, sub, tmp, total = 0;
    char ar[51], grade[3];
    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", ar, &sub, grade);
        if (grade[0] == 'P')
            continue;
        total += sub;
        if (grade[0] == 'F')
            continue;
        tmp = (grade[0] - 'F' + 1) * -1;
        if (grade[1] == '+') 
            tmp += 0.5;
        sum += tmp * sub;
    }
    printf("%.6lf", sum / total);
    return 0;
}