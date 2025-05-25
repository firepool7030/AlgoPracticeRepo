#BOJ_12865_gold5
import sys

# 가방의 최대 물건 개수, 최대 무게 입력
max_items, max_weight = map(int, input().split())
items = []
dp = [[0] * (max_weight + 1) for _ in range(max_items + 1)]

# 각 물건들의 무게, 가치 입력
for i in range(max_items):
    w, v = map(int, input().split())
    items.append([w, v])

# DP 동적 계획법으로 o(NM) 시간안에 해결
for i in range(1, max_items + 1):
    w, v = items[i - 1]
    for j in range(1, max_weight + 1):
        if j < w:
            dp[i][j] = dp[i - 1][j]
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w] + v)

print(dp[max_items][max_weight])