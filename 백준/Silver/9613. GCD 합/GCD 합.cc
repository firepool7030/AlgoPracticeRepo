#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int gcd(int n, int m) {
	if (n < m) {
		int tmp = n;
		n = m;
		m = tmp;
	}
	while (m > 0) {
		int tmp = m;
		m = n % m;
		n = tmp;
	}
	return n;
}

int main() {
	int n, m, * ar;
	long long sum;

	cin >> n;

	for (int i = 0; i < n; i++) {
		sum = 0;
		cin >> m;
		ar = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> ar[j];
		}
		for (int j = 0; j < m; j++) {
			for (int k = j + 1; k < m; k++) {
				sum += gcd(ar[j], ar[k]);
			}
		}
		cout << sum << endl;
		delete[] ar;
	}

	return 0;
}