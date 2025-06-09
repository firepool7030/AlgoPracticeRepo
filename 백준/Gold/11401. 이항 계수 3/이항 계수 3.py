#BOJ_11401_gold1
import sys
input = sys.stdin.readline

n, k = map(int, input().split())
MOD = 1000000007

# 팩토리얼 모드 나누기
fact = [1] * (n + 1)
for i in range(1, n + 1):
    fact[i] = (fact[i - 1] * i) % MOD

# 분모값 계산
denominator = (fact[k] * fact[n - k]) % MOD

# 역원 계산
inverse_denominator = pow(denominator, MOD-2, MOD)

print((fact[n] * inverse_denominator) % MOD)