# BOJ_2839_silver4
import sys
inp = sys.stdin.readline

n = int(inp())
cnt = 0

while n > 0:
    if n % 5 == 0:
        cnt += n // 5
        break
    n -= 3
    cnt += 1

if n < 0:
    print(-1)
else:
    print(cnt)