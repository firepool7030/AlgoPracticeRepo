#BOJ_11047_silver4
import sys
input = sys.stdin.readline

n, k = map(int, input().split())
coins = list(int(input()) for _ in range(n))
coins.sort(reverse=True)
total_coins = 0

for coin in coins:
    tmp = k // coin
    k -= tmp * coin
    total_coins += tmp

print(total_coins)