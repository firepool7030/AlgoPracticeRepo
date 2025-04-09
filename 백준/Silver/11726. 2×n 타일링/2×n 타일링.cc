#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int sum_of_cases(int dp[], int n, const int mod) {
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
	}
	return dp[n];
}

int main(void) {
	const int MAX = 1000, mod = 10007;
	int dp[MAX] = { 0 }, n;

	cin >> n;

	cout << sum_of_cases(dp, n, mod) << endl;

	return 0;
}