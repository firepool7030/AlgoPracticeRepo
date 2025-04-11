#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void is_prime(bool ar[], int n, int k) {
	int cnt = 0;
	ar[0] = ar[1] = true;
	for (int i = 2; i <= n; i++) {
		if (!ar[i]) {
			for (int j = 1; i * j <= n; j++) {
				if (!ar[i * j]) {
					ar[i * j] = true;
					cnt++;
					if (cnt == k) {
						cout << i * j << endl;
						return;
					}
				}
			}
		}
	}
	return;
}

int main(void) {

	bool ar[1000001] = { false };
	int n, k;
	cin >> n >> k;

	is_prime(ar, n, k);

	return 0;
}