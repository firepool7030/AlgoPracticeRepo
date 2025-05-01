#BOJ_2485_silver4
import sys
input = sys.stdin.readline

# 최대공약수 구하는 함수
def gcd (x:int, y:int):
    while y:
        x, y = y, x % y
    return x

# 입력 받기
n = int(input())
arr1 = [int(input()) for _ in range(n)]

# 인접한 가로수 사이의 거리 계산 후 저장
arr2 = [arr1[i] - arr1[i - 1] for i in range(1, n)]

# 거리간 최대공약수 구하기
total_gcd = arr2[0]
for i in arr2[1:]:
    total_gcd = gcd(total_gcd, i)

# 최대공약수 처리 후 합 반환
additional_trees = sum((distance // total_gcd - 1) for distance in arr2)
print(additional_trees)
