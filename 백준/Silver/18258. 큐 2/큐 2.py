#BOJ_18258_silver4
import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
queue = deque()

for _ in range(n):
    calc, *num = input().split()
    if calc == 'push':
        queue.append(num[0])
    elif calc == 'pop':
        print(-1 if not queue else queue.popleft())
    elif calc == 'size':
        print(len(queue))
    elif calc == 'empty':
        print(0 if queue else 1)
    elif calc == 'front':
        print(-1 if not queue else queue[0])
    elif calc == 'back':
        print(-1 if not queue else queue[-1])