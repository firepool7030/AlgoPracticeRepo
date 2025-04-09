#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 10000001;
const int mod = 1000000009;
long long dp[MAX] = { 1, 2, 4, 7 };

long long count_of_sum(int n) {
	for (int i = 4; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % mod;
	}
	return dp[n];
}

int main(void) {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		tmp--;
		if (tmp < 4 || dp[tmp] != 0) {
			cout << dp[tmp] << endl;
		}
		else
			cout << count_of_sum(tmp) << endl;
	}

	return 0;
}