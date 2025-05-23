#BOJ_12789_silver3
import sys
input = sys.stdin.readline

n = int(input())
line = list(map(int, input().split()))
stack = []
cnt = 1

while line:
    if line and line[0] == cnt:
        line.pop(0)
        cnt += 1
    elif stack and stack[-1] == cnt:
        stack.pop()
        cnt += 1
    else:
        stack.append(line.pop(0))

if stack == sorted(stack, reverse=True):
    print('Nice')
else:
    print('Sad')