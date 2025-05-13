# BOJ_2309_bronze1

import itertools

# 방법2: itertools에서 combinations를 사용

# 1. 9명의 난쟁이 키를 입력받을 배열 저장
ar = [int(input()) for _ in range(9)]

# 2. 9C7의 조합을 combination 변수에 저장
for combination in itertools.combinations(ar, 7):
    # combination의 총 합이 100일때 출력 후 break
    if sum(combination) == 100:
        for num in sorted(combination):
            print(num)
        break