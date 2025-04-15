# BOJ_10815_silver5
import sys
from bisect import bisect_left
input = sys.stdin.readline

n = int(input())
arr1 = list(map(int, input().strip().split()))
m = int(input())
arr2 = list(map(int, input().strip().split()))

arr1.sort()
length = len(arr1)
result = []

for x in arr2:
    idx = bisect_left(arr1, x)
    if length > idx and arr1[idx] == x:
        result.append('1')
    else:
        result.append('0')

print(' '.join(result))