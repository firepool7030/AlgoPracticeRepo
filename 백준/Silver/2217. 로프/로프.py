#BOJ_2217_silver4
import sys
input = sys.stdin.readline

n = int(input())
ropes = list(int(input()) for _ in range(n))
ropes.sort(reverse = True)

print(max(ropes[i] * (i + 1) for i in range(n)))