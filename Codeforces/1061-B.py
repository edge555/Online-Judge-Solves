sum=0
n,m=map(int,input().split())
ara=list(map(int,input().split()))
ara.sort()
for i in range (n):
    sum+=ara[i]
cnt=0
p=0
for i in range(n):
    cnt+=1
    if(ara[i]>p):
        p+=1
cnt+=ara[n-1]-p
print(sum-cnt)
