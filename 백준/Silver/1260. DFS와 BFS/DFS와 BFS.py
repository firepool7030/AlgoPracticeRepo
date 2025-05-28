#BOJ_1260_silver2
import sys
from collections import deque
input = sys.stdin.readline

# 정점, 간선, 시작점 입력
n, m, v = map(int, input().split())

# 그래프 초기화 (0번 인덱스 사용 x)
graph = [[] for _ in range(n + 1)]

# 양방향 간선 정보 입력
for i in range(m):
    start, end = map(int, input().split())
    graph[start].append(end)
    graph[end].append(start)

# 각 정점의 간선 오름차순으로 정렬
for adx in graph:
    adx.sort()

# dfs 구현
def dfs(v:int , visited: list) -> None:
    visited[v] = True
    print(v, end=' ')
    for node in graph[v]:
        if visited[node] is False:
            dfs(node, visited)

def bfs(v: int) -> None:
    visited = [False] * (n + 1)
    queue = deque()
    print(v, end=' ')
    visited[v] = True
    for node in graph[v]:
        queue.appendleft(node)
    while queue:
        tmp = queue.pop()
        if visited[tmp] is True:
            continue
        visited[tmp] = True
        print(tmp, end=' ')
        for node in graph[tmp]:
            if visited[node] is False:
                queue.appendleft(node)


# dfs에서 사용되는 방문 리스트 생성
visited = [False] * (n + 1)
dfs(v, visited)
print()
bfs(v)