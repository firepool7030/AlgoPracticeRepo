#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void) {
	long long dp[91][2];
	fill(&dp[0][0], &dp[0][0] + sizeof(dp) / sizeof(dp[0][0]), 0);
	int n;

	cin >> n;

	dp[1][0] = 0, dp[1][1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = dp[i - 1][0];
	}

	cout << dp[n][0] + dp[n][1] << endl;
	

	return 0;
}