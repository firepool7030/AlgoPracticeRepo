#BOJ_1026_silver4
import sys
input = sys.stdin.readline

n = int(input())
A = sorted(list(map(int, input().split())), reverse=True)
B = sorted(list(map(int, input().split())))
min_sum = 0

for i in range(n):
    min_sum += A[i] * B[i]

print(min_sum)