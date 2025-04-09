#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int stack[1000000];
int idx = -1;
int main(void) {
	int n, * ar, idx = -1;
	scanf("%d", &n);
	ar = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
	}
	for (int i = 0; i < n; i++) {
		while (idx != -1 && ar[stack[idx]] < ar[i]) {
			ar[stack[idx--]] = ar[i];
		}
		stack[++idx] = i;
	}
	while (idx != -1) {
		ar[stack[idx--]] = -1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", ar[i]);
	}
	return 0;
}