# BOJ_10815_silver5
import sys
input = sys.stdin.readline

n = int(input())
arr1 = set(map(int, input().split()))
m = int(input())
arr2 = list(map(int, input().split()))

print(' '.join('1' if num in arr1 else '0' for num in arr2))

"""
1. 배열의 존재여부 확인 -> set 사용
    - set은 hash table을 사용해서 o(1)의 탐색 시간을 가짐
2. 정렬된 배열에서의 탐색 -> bisect_left 사용
    - 이진탐색 기반으로 o(log n)의 탐색시간을 가짐
"""