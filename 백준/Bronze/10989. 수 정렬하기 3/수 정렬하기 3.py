# BOJ_10989_bronze1
import sys
input = sys.stdin.readline

n = int(input())
count = [0] * 10001

for i in range(n):
    x = int(input())
    count[x] += 1

for i, x in enumerate(count):
    if x != 0:
        for j in range(x):
            print(i)