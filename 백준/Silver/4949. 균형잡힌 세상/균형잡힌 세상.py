#BOJ_4949_silver4
import sys
input = sys.stdin.readline

while True:
    stack = []
    string = input().rstrip()
    balanced = True
    if string == '.':
        break
    for i in string:
        if i in '([':
            stack.append(i)
        elif i == ')':
            if not stack or stack[-1] != '(':
                balanced = False
                break
            stack.pop()
        elif i == ']':
            if not stack or stack[-1] != '[':
                balanced = False
                break
            stack.pop()
    # 대칭인 경우 yes
    if not stack and balanced:
        print('yes')
    # 비대칭인 경우 no
    else:
        print('no')