# BOJ_24262_bronze5
import sys
input = sys.stdin.readline()

def men_of_passion(arr, n):
    sum_of_num = 0
    for i in range(1, n + 1):
        sum_of_num += arr[i]
    return sum_of_num

n = int(input)

print(f"{n}\n{1}")
