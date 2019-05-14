import math
n,m=map(int,input().split())
ara=list(map(int,input().split()))
sum=0
mx=0
for i in range(n):
    sum+=ara[i]
    mx=max(mx,ara[i])
sum-=mx
print('YES' if sum<=m else 'NO')