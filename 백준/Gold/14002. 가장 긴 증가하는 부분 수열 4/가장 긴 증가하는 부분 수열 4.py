# BOJ_11053_silver2

n = int(input()) # n 입력
ar = list(map(int, input().split())) # n 만큼 정수를 배열에 입력
dp = [1] * n # dp 배열을 0으로 초기화

for i in range(1, n): # 1번 원소는 건너뛰고 반복 시작
    for j in range(0, i): # i원소 이전의 모든 원소들을 반복
        if ar[j] < ar[i]: # ar[i]보다 작은 경우만 비교
            dp[i] = max(dp[i], dp[j] + 1)

max_dp = max(dp)
print(max_dp)# dp 출력
max_idx = dp.index(max_dp) # 최댓값을 가지는 dp의 인덱스 값 저장

longest_sequence = []

for i in range(max_idx, -1, -1):
    if dp[i] == max_dp:
        longest_sequence.insert(0, ar[i])
        max_dp -= 1

print(' '.join(map(str, longest_sequence)))