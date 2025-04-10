#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int main(void) {
	int n, len, s, e;
	char ar[1001];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		gets(ar);
		len = strlen(ar);
		s = e = 0;
		for (int j = 0; j <= len; j++) {
			if (ar[j] == ' ' || ar[j] == '\0') {
				for (int k = e - 1; k >= s; k--) {
					printf("%c", ar[k]);
				}
				printf(" ");
				s = e + 1;
				e += 1;
			}
			else
				e++;
		}
		printf("\n");
	}

	return 0;
}