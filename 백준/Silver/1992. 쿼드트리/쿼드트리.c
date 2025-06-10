#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ar[64][64] = { 0, };
void quad_tree(int n, int x, int y);
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%1d", &ar[i][j]);
	}
	quad_tree(n, 0, 0);

	return 0;
}
void quad_tree(int n, int x, int y) {
	int c = ar[x][y];
	if (n == 1) {
		printf("%d", ar[x][y]);
		return;
	}
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (c != ar[i][j]) {
				printf("(");
				quad_tree(n / 2, x, y);
				quad_tree(n / 2, x, y + n / 2);
				quad_tree(n / 2, x + n / 2, y);
				quad_tree(n / 2, x + n / 2, y + n / 2);
				printf(")");
				return;
			}
		}
	}
	if (c == 1)
		printf("1");
	else
		printf("0");
	return;
}