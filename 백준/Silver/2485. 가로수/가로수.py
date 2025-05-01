#BOJ_2485_silver4
#가독성 향상 version
import sys
input = sys.stdin.readline

def gcd (x:int, y:int):
    while y:
        x, y = y, x % y
    return x

n = int(input())
arr1 = [int(input()) for _ in range(n)]
arr2 = [arr1[i] - arr1[i - 1] for i in range(1, n)]

total_gcd = arr2[0]
total_cnt = 0

for i in arr2:
    total_gcd = gcd(total_gcd, i)

for i in arr2:
    total_cnt += i // total_gcd - 1

print(total_cnt)
