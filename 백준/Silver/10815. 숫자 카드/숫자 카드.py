# BOJ_10815_silver5
import sys
input = sys.stdin.readline

n = int(input())
arr1 = set(map(int, input().split()))
m = int(input())
arr2 = list(map(int, input().split()))

print(' '.join('1' if num in arr1 else '0' for num in arr2))