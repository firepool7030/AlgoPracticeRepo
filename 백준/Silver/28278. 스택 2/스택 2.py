#BOJ_28278_silver4
import sys
input = sys.stdin.readline

stack = []
x = int(input())

for i in range(x):
    nums = list(map(int, input().split()))
    n = nums[0]
    if n == 1:
        m = nums[1]
        stack.append(m)
        continue
    elif n == 2:
        if stack:
            print(stack.pop())
        else:
            print(-1)
        continue
    elif n == 3:
        print(len(stack))
        continue
    elif n == 4:
        if len(stack) == 0:
            print(1)
        else:
            print(0)
        continue
    elif n == 5:
        if stack:
            print(stack[-1])
        else:
            print(-1)
        continue