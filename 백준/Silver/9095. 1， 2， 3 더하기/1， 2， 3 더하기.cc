#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int sum_of_cases(int n) {
	int dp[12] = { 0, };
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	return dp[n];
}

int main(void) {
	int repeat, n;
	cin >> repeat;
	
	for (int i = 0; i < repeat; i++) {
		cin >> n;
		cout << sum_of_cases(n) << endl;
	}
	
	return 0;
}