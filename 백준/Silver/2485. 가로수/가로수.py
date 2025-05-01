#BOJ_2485_silver4
import sys
input = sys.stdin.readline

def gcd (x:int, y:int):
    while y:
        x, y = y, x % y
    return x

n = int(input())
prev = int(input())
result = 0
arr = []

for _ in range(n-1):
    tmp = int(input())
    arr.append(tmp - prev)
    if result == 0:
        result = tmp - prev
    else:
        result = gcd(result, tmp - prev)
    prev = tmp

cnt = 0

for i in arr:
    cnt += i // result - 1

print(cnt)