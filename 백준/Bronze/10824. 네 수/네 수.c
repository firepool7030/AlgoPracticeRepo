#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	int a, b, c, d, tmp1, tmp2;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	tmp1 = b, tmp2 = d;

	long long n1 = a, n2 = c;

	while (tmp1 > 0) {
		n1 *= 10;
		tmp1 /= 10;
	}
	n1 += b;

	while (tmp2 > 0) {
		n2 *= 10;
		tmp2 /= 10;
	}
	n2 += d;

	printf("%lld", n1 + n2);

	return 0;
}
/*

*/