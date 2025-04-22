# BOJ_1620_silver4
import sys
input = sys.stdin.readline
output = sys.stdout.write

n, m = map(int, input().split())
pokemon_name = {}
pokemon_idx = {}

for i in range(1, n + 1):
    name = input().strip()
    pokemon_idx[i] = name
    pokemon_name[name] = i

for _ in range(m):
    tmp = input().strip()
    if tmp.isdigit():
        num = int(tmp)
        output(pokemon_idx[num] + "\n")
    else:
        output(str(pokemon_name[tmp]) + "\n")