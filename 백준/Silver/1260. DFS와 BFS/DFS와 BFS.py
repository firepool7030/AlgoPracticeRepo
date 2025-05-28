#BOJ_1260_silver2
import sys
from collections import deque
input = sys.stdin.readline

# 정점, 간선, 시작점 입력, 그래프 선언
n, m, v = map(int, input().split())
graph = [[] for _ in range(n + 1)]

# 간선 입력 후 오름차순 정렬
for _ in range(m):
    start, end = map(int, input().split())
    graph[start].append(end)
    graph[end].append(start)

for lst in graph:
    lst.sort()

# dfs, bfs 함수에 사용되는 방문 리스트 선언
dfs_visited = [False] * (n + 1)
bfs_visited = [False] * (n + 1)

# dfs 구현
def dfs(vertex: int) -> None:
    print(vertex, end=' ')
    dfs_visited[vertex] = True
    for node in graph[vertex]: # 정점의 노드들을 순서대로 깊이우선 탐색 진행
        if dfs_visited[node] is False:
            dfs(node)

# bfs 구현
def bfs(vertex: int) -> None:
    queue = deque()
    print(vertex, end=' ')
    bfs_visited[vertex] = True
    for node in graph[vertex]:
        queue.appendleft(node)
    # 데크를 사용한 bfs 구현
    while queue:
        tmp = queue.pop()
        if bfs_visited[tmp] is True:
            continue
        print(tmp, end=' ')
        bfs_visited[tmp] = True
        for node in graph[tmp]:
            if bfs_visited[node] is False:
                queue.appendleft(node)

dfs(v)
print()
bfs(v)