#BOJ_2217_silver4
import sys
input = sys.stdin.readline

n = int(input())
max_weight = list(int(input()) for _ in range(n))
max_weight.sort(reverse = True)
max_ = 0

for i in range(n):
    tmp = (i + 1) * max_weight[i]
    #print(tmp)
    if max_ < tmp:
        max_ = tmp

print(max_)