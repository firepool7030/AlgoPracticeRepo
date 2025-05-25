#BOJ_2164_silver4
import sys
from collections import deque

queue = deque()
n = int(input())

for i in range(1, n + 1):
    queue.append(i)

while n > 1:
    queue.popleft()
    queue.append(queue.popleft())
    n -= 1

print(queue[0])