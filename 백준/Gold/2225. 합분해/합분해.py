# BOJ_2225_gold5

import sys
n, k = map(int, sys.stdin.readline().strip().split())
dp = [[1] * n for _ in range(k)]

for i in range(1, k):
    for j in range(n):
        if j == 0:
            dp[i][j] = i + 1
        else:
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1]

print(dp[k - 1][n - 1] % 1000000000)