# BOJ_11651_silver5
import sys
from bisect import bisect_left
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

def search_smaller_numbers(arr):
    sorted_arr = sorted(set(arr))
    result = []
    for number in arr:
        result.append(bisect_left(sorted_arr, number))
    return result

result = search_smaller_numbers(arr)
print(*result, sep=' ')