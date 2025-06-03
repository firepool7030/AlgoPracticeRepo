#BOJ_1697_silver1
import sys
from collections import deque
input = sys.stdin.readline

n, k = map(int, input().split())

def bfs(start:int, end:int) -> None:
    MAX = 100001
    visited = [False] * MAX
    queue = deque()
    queue.append((start, 0)) # bfs queue안에 시작점과 최초 시간 삽입
    visited[start] = True
    while queue:
        cur, time = queue.popleft()
        if cur == end: # 목적지에 도착하면 탐색 시간 반환
            print(time)
            return
        for pos in (cur - 1, cur + 1, cur * 2):
            if 0 <= pos < MAX and visited[pos] == False:
                visited[pos] = True
                queue.append((pos, time + 1))

bfs(n, k)