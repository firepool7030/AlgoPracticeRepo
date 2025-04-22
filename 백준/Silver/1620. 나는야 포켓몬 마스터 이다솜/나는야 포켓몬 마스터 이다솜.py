# BOJ_1620_silver4
import sys
input = sys.stdin.readline

n, m = map(int, input().split())
pokemon_name = {}
pokemon_idx = {}

for i in range(n):
    name = input().strip()
    pokemon_idx[i + 1] = name
    pokemon_name[name] = i + 1

for _ in range(m):
    tmp = input().strip()
    if tmp.isdigit():
        num = int(tmp)
        print(pokemon_idx[num])
    else:
        print(pokemon_name[tmp])