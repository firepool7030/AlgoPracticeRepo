# BOJ_1181_silver5
import sys
input = sys.stdin.readline
output = sys.stdout.write

# 반복 횟수 입력
n = int(input())
# n번 문자열 입력후 중복 제거
words = [input().strip() for _ in range(n)]
words = sorted(set(words))

# 1. 알파벳 순으로 정렬 후 2. 문자열 길이로 정렬 후 반환
print(*sorted(words, key=len), sep='\n')