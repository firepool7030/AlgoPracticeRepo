#BOJ_1269_silver4
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr1 = set(map(int, input().split()))
arr2 = set(map(int, input().split()))

print(len(arr1) + len(arr2) - 2*(len(arr1&arr2)))