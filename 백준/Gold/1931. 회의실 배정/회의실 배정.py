#BOJ_1931_gold5
import sys
input = sys.stdin.readline

n = int(input())
meeting = list(tuple(map(int, input().split())) for _ in range(n))
meeting.sort(key=lambda x: (x[1], x[0]))

start_time = 0
end_time = 0
count = 0

for s, e in meeting:
    if s >= end_time:
        count += 1
        start_time = s
        end_time = e

print(count)