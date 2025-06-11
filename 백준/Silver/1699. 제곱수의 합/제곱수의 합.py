# BOJ_1699_silver2

# 1단계: 정수 n 입력 및 dp 초기화
n = int(input())
dp = [0] * (n + 1)
for i in range(1, n + 1):
    dp[i] = i # dp = [0, 1, 2, 3, 4, ... ]

# dp[4]부터 값이 달라지므로 idx = 4 부터 반복문을 돌아가면서 점화식을 대입한다.
for i in range(4, n + 1):
    for j in range(1, i//2 + 1):
        if i < j * j:
            break
        if  dp[i] > dp[i - j * j] + 1:
            dp[i] = dp[i - j * j] + 1

print(dp[n])