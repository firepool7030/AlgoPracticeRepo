def solution(rank, attendance):
    
    combined = []
    for i in range(len(rank)):
        combined.append((rank[i], attendance[i], i))
    combined.sort()
    #print(combined)
    
    result = []
    for r, att, idx in combined:
        if att:
            result.append(idx)
        if len(result) == 3: # 3명을 다 뽑았으면 루프 종료
            break
    
    return 10000 * result[0] + 100 * result[1] + result[2]