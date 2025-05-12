#BOJ_28278_silver4
import sys
input = sys.stdin.readline

stack = []
x = int(input())

for i in range(x):
    n, *nums = map(int, input().split())
    # 정수 x 추가
    if n == 1:
        stack.append(nums[0])
    # 맨 위 정수 pop 후 출력 / -1
    elif n == 2:
        if stack:
            print(stack.pop())
        else:
            print(-1)
    # 스택 정수 개수 출력
    elif n == 3:
        print(len(stack))
    # 스택 empy = 1 / 0
    elif n == 4:
        print(0 if stack else 1)
    # 맨위 정수 출력 / -1
    elif n == 5:
        print(stack[-1] if stack else -1)