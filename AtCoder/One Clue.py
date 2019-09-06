n,m=map(int,input().split())
mn=m-n+1
mx=m+n-1
for i in range(mn,mx+1):
    print("%d "%(i),end="")