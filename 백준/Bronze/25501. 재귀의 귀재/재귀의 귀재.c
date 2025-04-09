#pragma warning (disalble:4996)
#include <stdio.h>
#include<string.h>
int palindrome(const char* s);
int recursion(const char* s, int l, int r);
int cnt;
int main(void) {
	int n;
	char ar[1001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", ar);
		printf("%d ", palindrome(ar));
		printf("%d\n", cnt);
		cnt = 0;
	}
	return 0;
}
int palindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}
int recursion(const char* s, int l, int r) {
	cnt++;
	if (l >= r)
		return 1;
	else if (s[l] != s[r])
		return 0;
	else {
		return recursion(s, l + 1, r - 1);
	}
}