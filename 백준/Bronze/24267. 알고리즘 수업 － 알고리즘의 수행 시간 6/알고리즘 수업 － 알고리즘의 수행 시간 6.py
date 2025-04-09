# BOJ_24267_bronze2
import sys
input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
s = ((n-2)*(n-1)*(2*n-3)+3*(n-1)*(n-2))//12
output(f"{s}\n{3}")