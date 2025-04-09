#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long n, long long m) {
	if (m != 0)
		return gcd(m, n % m);
	return n;
}

int main() {

	int n, m;
	long long * ar, max_ = 0;

	cin >> n >> m;
	ar = new long long[n];

	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		ar[i] = abs(ar[i] - m);
	}

	for (int i = 0; i < n; i++) {
		if (ar[i] < max_) 
			swap(ar[i], max_);
		max_ = gcd(ar[i], max_);
	}

	cout << max_ << endl;

	return 0;
}