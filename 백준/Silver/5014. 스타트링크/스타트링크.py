#BOJ_5014_silver1
import sys
from collections import deque
input = sys.stdin.readline

def bfs() -> None:
    floor, start, location, up, down = map(int, input().split())
    visited = [False] * (floor + 1)
    queue = deque()
    queue.appendleft((start, 0))
    visited[start] = True
    while queue:
        s, num_of_clicks = queue.pop()
        if s == location:
            print(num_of_clicks)
            return
        for change in (up, -down):
            new_loc = s + change
            if 1 <= new_loc <= floor and visited[new_loc] is False:
                queue.appendleft((new_loc, num_of_clicks + 1))
                visited[new_loc] = True

    print("use the stairs")
    return

bfs()