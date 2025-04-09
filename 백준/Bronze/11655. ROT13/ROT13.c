#include <stdio.h>
#include <string.h>

int main(void) {
    char ar[101];
    gets(ar);

    int len = strlen(ar);
    for (int i = 0; i < len; i++) {
        if (ar[i] >= 'a' && ar[i] <= 'z') {
            ar[i] += 13;
            if (ar[i] < 'a' || ar[i] > 'z')
                ar[i] -= 26;
        }
        else if (ar[i] >= 'A' && ar[i] <= 'Z') {
            ar[i] += 13;
            if (ar[i] < 'A' || ar[i] > 'Z')
                ar[i] -= 26;
        }
    }

    puts(ar);
    return 0;
}