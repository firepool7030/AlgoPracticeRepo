import sys
import math
input = sys.stdin.readline
a, b, v = map(int, input().split())

x = math.ceil((v - a) / (a - b))

print(x + 1)
