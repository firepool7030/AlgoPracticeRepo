#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	int cnt[26] = { 0, }, tmp;
	char ar[101];
	scanf("%s", ar);
	int len = strlen(ar);
	for (int i = 0; i < len; i++) {
		tmp = ar[i] - 'a';
		cnt[tmp]++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}