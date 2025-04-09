#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void) {
	
	int dp[1001] = { 0, }, ar[1001] = { 0, };
	int n;
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> ar[i];
	}

	dp[1] = ar[1];

	for (int i = 2; i <= n; i++) {
		int total_min = ar[i];
		for (int j = 1; j <= i / 2; j++) {
			total_min = min(total_min, dp[j] + dp[i - j]);
		}
		dp[i] = total_min;
	}

	cout << dp[n] << endl;

	return 0;
}