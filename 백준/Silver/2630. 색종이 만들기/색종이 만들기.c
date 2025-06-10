#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ar[128][128] = { 0, };
int cnt_blue = 0;
int cnt_white = 0;
void cnt(int n, int x, int y);
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &ar[i][j]);
		}
	}
	cnt(n, 0, 0);
	printf("%d\n%d", cnt_white, cnt_blue);
	return 0;
}
void cnt(int n, int x, int y) {
	int flag = 0, color = ar[x][y];
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (ar[i][j] != color) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0) {
		if (color == 1)
			cnt_blue++;
		else
			cnt_white++;
		return;
	}
	else {
		cnt(n / 2, x, y);
		cnt(n / 2, x + n / 2, y);
		cnt(n / 2, x, y + n / 2);
		cnt(n / 2, x + n / 2, y + n / 2);
	}
}