# BOJ_11054_gold4
import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

def count_asc(lst: list):
    count = [1] * n
    for i, x in enumerate(lst):
        for j in range(i):
            if lst[j] < x:
                count[i] = max(count[i], count[j] + 1)
    return count

asc_count = count_asc(arr)
desc_count = count_asc(arr[::-1])[::-1]

max_count = max(sum(x) for x in zip(asc_count, desc_count))
print(max_count - 1)