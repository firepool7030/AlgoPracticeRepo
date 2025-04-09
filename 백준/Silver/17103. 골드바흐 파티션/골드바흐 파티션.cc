#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void is_prime(bool *ar, const int MAX) {
	ar[0] = ar[1] = true;
	for (int i = 2; i * i <= MAX; i++) {
		if (!ar[i]) {
			for (int j = 2; i * j <= MAX; j++)
				ar[i * j] = true;
		}
	}
}

int main(void) {
	int repeat_num, n;
	const int MAX = 1000000;
	bool ar[MAX + 1] = { false, };

	is_prime(ar, MAX);

	cin >> repeat_num;

	for (int i = 0; i < repeat_num; i++) {
		int cnt = 0;
		cin >> n;
		for (int j = 0; j <= n / 2; j++) {
			if (!ar[j] && !ar[n - j])  cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}