#BOJ_2178_silver2
import sys
from collections import deque

# 미로 정보 입력
input = sys.stdin.readline
n, m = map(int, input().split())
maze = [list(map(int, input().strip())) for _ in range(n)]

# 미로 탐색을 위한 bfs 구현
def bfs(a:int, b:int) -> None:
    queue = deque()
    queue.appendleft((a, b))
    # x, y좌표 변환 리스트
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    while queue:
        x, y = queue.pop()
        if x == n - 1 and y == m - 1:
            break
        for i in range(4):
            nx = x + dx[i]
            my = y + dy[i]
            if 0 <= nx < n and 0 <= my < m and maze[nx][my] == 1:
                maze[nx][my] = maze[x][y] + 1
                queue.appendleft((nx, my))
    print(maze[n - 1][m - 1])

bfs(0, 0)
