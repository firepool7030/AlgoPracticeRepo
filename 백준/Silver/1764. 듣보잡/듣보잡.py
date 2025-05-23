#BOJ_1764_silver4
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr1 = set()
arr2 = set()

for _ in range(n):
    arr1.add(input().strip())
for _ in range(m):
    tmp = input().strip()
    if tmp in arr1:
        arr2.add(tmp)

print(len(arr2))
for name in sorted(arr2):
    print(name)