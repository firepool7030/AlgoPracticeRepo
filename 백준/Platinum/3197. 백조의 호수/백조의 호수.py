#BOJ_3197_platinum5
import sys
from collections import deque
input = sys.stdin.readline

# 호수 정보 입력
r, c = map(int, input().split())
lake = [list(input().strip()) for _ in range(r)]
swans = []
current_day = 0
swans_visited = [[False] * c for _ in range(r)] # 백조 visited 배열
water_visited = [[False] * c for _ in range(r)] # 물 visited 배열

# 물 녹는 경로, 백조 이동경로 queue 초기화
water_pos = deque()
swans_pos = deque()
for i in range(r):
    for j in range(c):
        if lake[i][j] == '.':
            water_pos.append((i, j)) # 물을 나타내는 큐에 좌표와 현재 날짜 입력
            water_visited[i][j] = True
        elif lake[i][j] == 'L':
            lake[i][j] = '.'
            swans.append((i, j))
            water_pos.append((i, j)) # 백조도 물과 같이 취급
            water_visited[i][j] = True

# 첫번째 swan의 위치 정보만 queue에 입력
swans_pos.append((swans[0][0], swans[0][1])) # 백조 한마리의 좌표와 현재 날짜 입력
swans_visited[swans[0][0]][swans[0][1]] = True

while True:
    # 1. 백조들이 만날 수 있는지 확인
    next_swans_pos = deque()  # 내일 탐색할 큐 생성
    while swans_pos:
        x, y = swans_pos.popleft()
        if (x, y) == swans[1]:
            print(current_day)
            exit()
        for dx, dy in ((1, 0), (-1, 0), (0, 1), (0, -1)):
            cx = x + dx
            cy = y + dy
            if 0 <= cx < r and 0 <= cy < c and not swans_visited[cx][cy]:
                swans_visited[cx][cy] = True
                if lake[cx][cy] == '.': # 물일때 다시 탐색
                    swans_pos.append((cx, cy))
                else: # 얼음일 경우 내일 녹기 때문에 내일 탐색할 queue에 삽입
                    next_swans_pos.append((cx, cy))
    swans_pos = next_swans_pos

    # 2. 얼음 녹이기 (가장 첫 원소의 날짜와 현재 날짜가 같은 경우만 실행)
    next_water_pos = deque()
    while water_pos:
        x, y = water_pos.popleft()
        for dx, dy in ((1, 0), (-1, 0), (0, 1), (0, -1)):
            cx = x + dx
            cy = y + dy
            if 0 <= cx < r and 0 <= cy < c and not water_visited[cx][cy] and lake[cx][cy] == 'X':
                lake[cx][cy] = '.'
                next_water_pos.append((cx, cy))
                water_visited[cx][cy] = True
    water_pos = next_water_pos

    # 3. 하루 증가
    current_day += 1