import sys
from collections import deque
input = sys.stdin.readline

n, k = map(int, input().split())

def bfs(start:int, end:int) -> None:
    MAX = 100001
    visited = [False] * MAX
    queue = deque()
    queue.append((start, 0))
    visited[start] = True

    while queue:
        cur, time = queue.popleft()
        if cur == end:
            print(time)
            return
        for pos in (cur - 1, cur + 1, cur * 2):
            if 0 <= pos < MAX and not visited[pos]:
                visited[pos] = True
                queue.append((pos, time + 1))

bfs(n, k)
