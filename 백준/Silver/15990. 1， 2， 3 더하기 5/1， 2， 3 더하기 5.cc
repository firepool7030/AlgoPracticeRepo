#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
long long dp[100001][4], mod = 1000000009;

int main(void) {

	int n, tmp, flag = 4;
	cin >> n;

	dp[1][1] = 1, dp[1][2] = 0, dp[1][3] = 0;
	dp[2][1] = 0, dp[2][2] = 1, dp[2][3] = 0;
	dp[3][1] = 1, dp[3][2] = 1, dp[3][3] = 1;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp >= flag) {
			for (int j = flag; j <= tmp; j++) {
				dp[j][1] = (dp[j - 1][2] + dp[j - 1][3]) % mod;
				dp[j][2] = (dp[j - 2][1] + dp[j - 2][3]) % mod;
				dp[j][3] = (dp[j - 3][1] + dp[j - 3][2]) % mod;
			}
			flag = tmp;
		}
		cout << (dp[tmp][1] + dp[tmp][2] + dp[tmp][3]) % mod << endl;
	}

	return 0;
}