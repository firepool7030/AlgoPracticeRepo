#BOJ_2178_silver1
import sys
from collections import deque
input = sys.stdin.readline

# 미로 입력
n, m = map(int, input().split())
maze = [list(map(int, input().strip())) for _ in range(n)]

def bfs() -> None:
    queue = deque()
    queue.appendleft((0, 0, 1)) # x좌표, y좌표, 미로 탐색 횟수 입력
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    while queue:
        x, y, movements = queue.pop()
        if x == n - 1 and y == m - 1:
            print(movements)
            return
        maze[x][y] = 0
        for i in range(4): # 사방을 확인후 DFS 큐에 삽입
            nx = x + dx[i]
            my = y + dy[i]
            if 0 <= nx < n and 0 <= my < m and maze[nx][my] == 1:
                queue.appendleft((nx, my, movements + 1))
                maze[nx][my] = 0

bfs()