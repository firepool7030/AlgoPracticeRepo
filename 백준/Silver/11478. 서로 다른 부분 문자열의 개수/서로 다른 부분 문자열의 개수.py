#BOJ_11478_silver3
import sys
input = sys.stdin.readline

s = input().strip()
result = set()

for i in range(len(s)):
    for j in range(i + 1,len(s) + 1):
        result.add(s[i:j])

print(len(result))