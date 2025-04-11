#include <stdio.h>
int main() {
    int ar[6] = {1, 1, 2, 2, 2, 8}, a;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a);
        printf("%d ", ar[i] - a);
    }
    
    return 0;
}