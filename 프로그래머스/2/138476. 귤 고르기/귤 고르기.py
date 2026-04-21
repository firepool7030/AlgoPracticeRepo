from collections import Counter, deque
from itertools import permutations, combinations

def solution(k, tangerine):
    
    sum = 0
    cnt = 0
    gyul = Counter(tangerine)
    gyul = sorted(gyul.values(), reverse=True)

    for i in gyul:
        sum += i
        cnt += 1
        if sum >= k:
            return cnt
    return cnt