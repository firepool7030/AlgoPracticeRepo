#BOJ_13241_silver5
import sys
input = sys.stdin.readline

def gcd(x: int, y: int):
    while y:
        x, y = y, x % y
    return x

def lcm(x: int, y: int):
    return x * y // gcd(x, y)

n, m = map(int, input().split())
print(lcm(n, m))
