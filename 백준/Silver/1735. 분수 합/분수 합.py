#BOJ_1735_silver3
import sys
input = sys.stdin.readline

def gcd(x:int, y:int):
    while y:
        x, y = y, x % y
    return x

def lcm(x:int, y:int):
    return x * y // gcd(x, y)

a, b = map(int,input().split())
c, d = map(int,input().split())

denominator = lcm(b, d)
a *= denominator // b
c *= denominator // d
numerator = a + c

common = gcd(numerator, denominator)

print((a + c) // common, denominator // common)