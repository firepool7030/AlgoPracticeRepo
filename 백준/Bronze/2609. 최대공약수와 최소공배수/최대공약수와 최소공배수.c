#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	int n, m, gcd;
	scanf("%d %d", &n, &m);
	if (n < m) {
		int tmp = n;
		n = m;
		m = tmp;
	}
	for (int i = m; i > 0; i--) {
		if (n % i == 0 && m % i == 0) {
			gcd = i;
			printf("%d\n", gcd);
			break;
		}
	}
	for (int i = n;; i += gcd) {
		if (i % n == 0 && i % m == 0) {
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}
/*

*/