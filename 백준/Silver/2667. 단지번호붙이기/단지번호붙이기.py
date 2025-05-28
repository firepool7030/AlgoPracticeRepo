#BOJ_2667_silver1
import sys
from collections import deque
input = sys.stdin.readline

# 단지 크기 입력 및 지도 초기화
n = int(input())
apt_complex = [list(map(int, input().strip())) for _ in range(n)]

# dfs를 사용해 연결된 단지 측정
def dfs(x: int, y: int, flag: int) -> int:
    cnt = 1
    dx = [0, 1, 0, -1] # 최적화를 위해 기준점부터 오른쪽, 아래, 왼쪽, 위 순서로 탐색
    dy = [1, 0, -1, 0]
    apt_complex[x][y] = flag
    for i in range(4):
        nx = x + dx[i]
        my = y + dy[i]
        if 0 <= nx < n and 0 <= my < n and apt_complex[nx][my] == 1:
            cnt += dfs(nx, my, flag)
    return cnt

# 단지 개수, 단지의 크기를 저장하는 변수 선언
count_of_complex = 0
complex_size = []
flag = 2 # 단지를 구분하기 위해 2부터 flag 선언

# 모든 지도를 순회하면서 단지 수 탐색
for i in range(n):
    for j in range(n):
        if apt_complex[i][j] == 1:
            complex_size.append(dfs(i, j, flag))
            count_of_complex += 1 # 단지수를 세는 변수
            flag += 1 # 단지를 구분하기 위한 플래그

# 단지수, 단지별 집 수 출력
print(count_of_complex)
for idx in sorted(complex_size):
    print(idx)