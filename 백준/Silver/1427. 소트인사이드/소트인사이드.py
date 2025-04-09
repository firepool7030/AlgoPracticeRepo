# BOJ_10989_bronze1
import sys
input = sys.stdin.readline

n = int(input())
arr = sorted(list(map(int, str(n))))

print(*arr[::-1], sep='')