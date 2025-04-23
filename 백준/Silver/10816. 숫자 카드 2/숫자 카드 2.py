#BOJ_10816_silver4
import sys
input = sys.stdin.readline

n = int(input())
lst = list(map(int, input().strip().split()))
arr = {}

for tmp in lst:
    if tmp in arr:
        arr[tmp] += 1
    else:
        arr[tmp] = 1

m = int(input())
lst = list(map(int, input().strip().split()))

result = ' '.join(str(arr.get(tmp, 0)) for tmp in lst)
print(result)