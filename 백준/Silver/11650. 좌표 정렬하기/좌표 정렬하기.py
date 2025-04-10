# BOJ_11650_silver5
import sys
input = sys.stdin.readline
output = sys.stdout.write

# 입력 받을 횟수 n 입력
n = int(input())

# 좌표를 tuple 형태로 저장
points = [tuple(map(int, input().split())) for _ in range(n)]

# x, y 튜플을 문자열로 바꾼 후 \n.join 함수로 이어서 붙이기 (print()로 해도 되지만, 여러번의 print()를 한 번으로 줄임)
result = '\n'.join(f'{x} {y}' for x, y in sorted(points))
output(result)