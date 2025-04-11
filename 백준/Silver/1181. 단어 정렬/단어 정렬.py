# BOJ_1181_silver5
import sys
input = sys.stdin.readline
output = sys.stdout.write

# 1. 반복 횟수 입력
n = int(input())
# 2. n번 문자열 입력후 중복 제거
words = [input().strip() for _ in range(n)]
# 3. 중복 제거 후 알파벳 순서로 정렬
words = sorted(set(words))
# 4. 다시 길이 순서로 정렬 후 반환
print(*sorted(words, key=len), sep='\n')