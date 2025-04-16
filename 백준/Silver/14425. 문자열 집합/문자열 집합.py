# BOJ_14425_silver4
import sys
input = sys.stdin.readline

n, m = map(int, input().split())

arr1 = set([input().strip() for _ in range(n)])
cnt = 0

for _ in range(m):
    tmp = input().strip()
    if tmp in arr1:
        cnt += 1

print(cnt)