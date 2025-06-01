# BOJ_2292_bronze2

n = int(input())

x = 1
cnt = 1

while x < n:
    x += cnt * 6
    cnt += 1

print(cnt)