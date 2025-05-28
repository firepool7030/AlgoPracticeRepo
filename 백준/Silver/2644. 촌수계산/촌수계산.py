#BOJ_2644_silver2
import sys
from collections import deque
input = sys.stdin.readline

# 사람수 n, 비교할 두 사람 (p_start p_end), 간선수 m 입력 및 그래프 선언
n = int(input())
p_start, p_end = map(int, input().split())
m = int(input())
graph = [[] for _ in range(n + 1)]

# 간선 정보 입력
for _ in range(m):
    start, end = map(int, input().split())
    graph[start].append(end)
    graph[end].append(start)

# bfs로 최단 촌수 거리 탐색
def bfs(vertex: int, end: int, level: int) -> int:
    visited = [False] * (n + 1)
    queue = deque()
    queue.appendleft((vertex, level))
    while queue:
        tmp, level = queue.pop()
        if tmp == end:
            return level
        visited[tmp] = True
        for node in graph[tmp]:
            if visited[node] is False:
                queue.appendleft((node, level + 1))
    return -1

print(bfs(p_start, p_end,0))