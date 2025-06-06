#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void is_prime(bool ar[], int MAX) {
	ar[0] = ar[1] = true;
	int n = MAX - 1;
	for (int i = 2; i * i <= n; i++) {
		if (!ar[i]) {
			for (int j = i * i; j <= n; j += i) {
				ar[j] = true;
			}
		}
	}
	return;
}

int main(void) {
	const int MAX = 1000001;
	int start, end;
	bool ar[MAX] = { false, };
	is_prime(ar, MAX);

	scanf("%d %d", &start, &end);
	
	for (int i = start; i <= end; i++) {
		if (!ar[i])
			printf("%d\n", i);
	}

	return 0;
}