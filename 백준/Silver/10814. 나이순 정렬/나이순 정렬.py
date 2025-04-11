# BOJ_1181_silver5
import sys
input = sys.stdin.readline

# 반복 횟수 입력
n = int(input())
# n개의 데이터 입력
data = [input().split() for _ in range(n)]

# 방법 1
for age, name in sorted(data, key=lambda x:int(x[0])):
    print(age, name)
