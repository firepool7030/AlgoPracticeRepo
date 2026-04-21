from collections import deque

def solution(maps):
    
    n = len(maps)
    m = len(maps[0])
    dx = [-1, 0, 1, 0]
    dy = [0, -1, 0, 1]
    total_count = 1
        
    # 큐 선언
    explorer = deque()
    explorer.append([0, 0])
    
    # bfs 순회 시작
    while explorer:
        # 큐 안의 좌표 뽑아서 근처 좌표 입력
        location = explorer.popleft()
        x = location[0]
        y = location[1]
        
        # 현재 좌표에서 상하좌우 탐색
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            # 범위 내 좌표이고 1값일때 횟수를 대신해서 입력
            if 0 <= nx < n and 0 <= ny < m and maps[nx][ny] == 1:
                maps[nx][ny] = maps[x][y] + 1
                explorer.append((nx, ny))

    if maps[n - 1][m - 1] <= 1:
        return -1
    else:
        return maps[n - 1][m - 1]
    