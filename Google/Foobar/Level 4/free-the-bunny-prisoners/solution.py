from itertools import combinations
def solution(num_buns, num_required):
    repeat = num_buns - num_required+1
    ans=[]
    for _ in range(num_buns):
        ans.append([])
    if num_required==0:
        return ans
    keys = list(combinations(range(num_buns),repeat))
    for i in range(len(keys)):
        for j in range(len(keys[i])):
            k = keys[i][j]
            ans[k].append(i)
    return ans      