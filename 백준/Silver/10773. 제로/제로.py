# BOJ_10773_silver4
import sys
input = sys.stdin.readline

stack = []
k = int(input())

for i in range(k):
    n = int(input())
    if n == 0:
        stack.pop()
    else:
        stack.append(n)

print(sum(stack))