# BOJ_25305_bronze2
import sys
input = sys.stdin.readline

n, m = map(int, input().split())

arr = list(map(int, input().split()))

print(sorted(arr)[n - m])