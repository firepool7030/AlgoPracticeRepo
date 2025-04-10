#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	long long dp[101][10], mod = 1000000000, sum = 0;
	fill(&dp[0][0], &dp[0][0] + sizeof(dp)/ sizeof(dp[0][0]), 0);

	cin >> n;
	dp[1][0] = 0;
	for (int i = 1; i < 10; i++) 
		dp[1][i] = 1;
	
	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1] % mod;
		dp[i][9] = dp[i - 1][8] % mod;
		for (int j = 1; j < 9; j++) {
			dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1]) % mod;
		}
	}

	for (int i = 0; i < 10; i++) {
		sum += dp[n][i];
	}

	cout << sum % mod << endl;

	return 0;
}