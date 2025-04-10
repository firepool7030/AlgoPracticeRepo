#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	int len, cnt = 0, sum = 0;
	char ar[100000] = { '\0', };
	gets(ar);
	len = strlen(ar);
	for (int i = 0; i < len; i++) {
		if (ar[i] == '(')
			cnt++;
		else {
			cnt--;
			if (ar[i - 1] != ar[i]) 
				sum += cnt;
			else
				sum += 1;
		}
 	}
	printf("%d", sum);
	return 0;
}