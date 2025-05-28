#BOJ_2606_silver3
import sys
input = sys.stdin.readline

# 컴퓨터 개수, 간선 입력, 그래프 초기화
n = int(input())
m = int(input())
graph = [[] for _ in range(n + 1)]

# 그래프에 간선 정보 입력
for i in range(m):
    start, end = map(int, input().split())
    graph[start].append(end)
    graph[end].append(start)

# 1번 컴퓨터가 방문하는 리스트 초기화
visited = [False] * (n + 1)

# dfs로 경로 탐색
def dfs(v:int) -> None:
    visited[v] = True
    for node in graph[v]:
        if visited[node] is False:
            dfs(node)

dfs(1)
print(visited.count(True) - 1)