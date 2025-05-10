#BOJ_4134_silver4
import sys
input = sys.stdin.readline

def is_prime(x):
    if x < 2:
        return False
    if x == 2:
        return True
    if x % 2 == 0:
        return False
    for i in range(3, int(x ** 0.5) + 1, 2):
        if x % i == 0:
            return False
    return True

n = int(input())

for i in range(n):
    tmp = int(input())
    while True:
        if is_prime(tmp) is True:
            print(tmp)
            break
        tmp += 1