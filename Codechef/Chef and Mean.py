tc=int(input())
for t in range(tc):
    n=int(input())
    ara=list(map(int,input().split()))
    sum=0
    for i in range(n):
        sum+=ara[i]
    ans=-1
    for i in range(n):
        cursum=sum-ara[i]
        if(n*cursum==sum*(n-1)):
            ans=i+1
            break
    print("Impossible" if ans==-1 else ans)