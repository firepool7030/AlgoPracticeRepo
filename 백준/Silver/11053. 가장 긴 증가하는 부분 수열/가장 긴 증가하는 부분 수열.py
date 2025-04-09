# BOJ_1699_silver2
import sys

n = int(sys.stdin.readline().strip())
ar = list(map(int, sys.stdin.readline().strip().split()))
# print(' '.join(map(str, ar)))
dp = [1] * n

for i in range(1, n):
    for j in range(0, i):
        if ar[j] < ar[i]:
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))