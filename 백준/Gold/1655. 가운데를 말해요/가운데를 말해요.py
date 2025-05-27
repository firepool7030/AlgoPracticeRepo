# BOJ_1655_gold2
import sys
import heapq
input = sys.stdin.readline

# 반복횟수 입력
n = int(input())

# 실시간 중앙값을 찾기 위해 최대힙, 최소힙 선언
max_heap = []
min_heap = []

# n번만큼 실시간으로 중앙값 탐색
for i in range(n):
    tmp = int(input())
    if len(max_heap) == len(min_heap): # 조건 1. 힙의 크기가 같으면 최대힙에 삽입
        heapq.heappush(max_heap, -tmp) # heapq는 최대힙을 제공하지 않음
    else:
        heapq.heappush(min_heap, tmp) # 힙의 크기가 다르면 최소힙에 삽입
    if i > 0 and -max_heap[0] > min_heap[0]: # 조건 2. max_heap의 최대값이 min_heap 최소값보다 크면 swap
        max_val = -heapq.heappop(max_heap)
        min_val = heapq.heappop(min_heap)
        heapq.heappush(max_heap, -min_val)
        heapq.heappush(min_heap, max_val)
        
    print(-max_heap[0])