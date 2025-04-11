# BOJ_11651_silver5
import sys
input = sys.stdin.readline
output = sys.stdout.write

# 반복 횟수 입력
n = int(input())
# 반복 횟수 만큼 좌표쌍 입력
points = [tuple(map(int, input().split())) for _ in range(n)]

# 각 좌표쌍을 y좌표를 기준으로 오름차순 정렬 후 문자열 result에 저장
result = '\n'.join(f"{x} {y}" for x, y in sorted(points, key = lambda x: (x[1], x[0])))
# 저장된 문자열을 한번에 출력
print(result)

"""
## 로직 설명 ##

sorted(points, key = lambda x: (x[1], x[0]))

1. sorted() 함수의 동작 로직
    - key 함수를 기준으로 새로운 리스트 생성
    - 생성된 리스트 예시 (내부 동작 설명)
      [
        ((2, 3), (3, 2)), # key, 원래값
        ((5, 1), (1, 5)),
        ((1, 3), (3, 1)),
        ((4, 2), (2, 4))
      ]
    - key값을 기준으로 정렬 후 key값 삭제
      [
        ((1, 3), (3, 1)), 
        ((2, 3), (3, 2)),
        ((4, 2), (2, 4)),
        ((5, 1), (1, 5)) -> 왼쪽 원래값만 출력
      ]
    
    - 즉, 원래 sorted(arr) 함수는 sorted(arr, key=lambda x: x) 이렇게 구현
"""