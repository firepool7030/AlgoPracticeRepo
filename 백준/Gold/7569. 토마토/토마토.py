#BOJ_7569_gold5
import sys
from collections import deque
input = sys.stdin.readline

# 토마토 상자의 가로, 세로, 높이 입력 및 상자 정보 초기화
m, n, h = map(int, input().split())
box = []

# 상자에 토마토 입력
for _ in range(h):
    box.append([list(map(int, input().split())) for _ in range(n)])

# bfs로 익는 시간 계산
def bfs() -> int: # 변환에 걸린 시간 반환

    # 1. 데크 선언 및 변화량 계산에 사용될 변수 선언
    queue = deque()
    dx = [-1, 1, 0, 0, 0, 0]
    dy = [0, 0, -1, 1, 0, 0]
    dz = [0, 0, 0, 0, -1, 1]

    # 2. 익은 토마토를 큐에 몽땅 삽입
    for z in range(h):
        for y in range(n):
            for x in range(m):
                if box[z][y][x] == 1:
                    queue.appendleft((x, y, z, 0)) # 위치와 현재 날짜를 묶어서 큐에 삽입

    # 3. 큐가 빌때까지 반복
    max_date = 0
    while queue:
        x, y, z, date = queue.pop()
        max_date = max(max_date, date)
        for i in range(6):
            nx = x + dx[i]
            my = y + dy[i]
            hz = z + dz[i]
            if 0 <= nx < m and 0 <= my < n and 0 <= hz < h and box[hz][my][nx] == 0:
                box[hz][my][nx] = 1
                queue.appendleft((nx, my, hz, date + 1))
    
    # 4. 아직 안익은 사과가 있다면 -1 반환
    for z in range(h):
        for y in range(n):
            for x in range(m):
                if box[z][y][x] == 0:
                    return -1
    
    # 5. 날짜 반환
    return max_date

print(bfs())