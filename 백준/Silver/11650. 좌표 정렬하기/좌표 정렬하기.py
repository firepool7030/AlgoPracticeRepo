# BOJ_11650_silver5
import sys
input = sys.stdin.readline

# 입력 받을 횟수 n 입력
n = int(input())

# 좌표를 tuple 형태로 저장 후 정렬
points = [tuple(map(int, input().split())) for _ in range(n)]
points = sorted(points)

# 정렬된 좌표들을 오름차순으로 출력
for x, y in points:
    print(x, y)