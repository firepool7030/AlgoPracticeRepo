# BOJ_7785_silver5
import sys
input = sys.stdin.readline

n = int(input())
arr = set()

for _ in range(n):
    name, status = input().strip().split()
    if status == 'enter':
        arr.add(name)
    elif status == 'leave':
        arr.discard(name)

result = '\n'.join(sorted(arr, reverse=True))
print(result)