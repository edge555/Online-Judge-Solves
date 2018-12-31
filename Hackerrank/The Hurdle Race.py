n,k=map(int,input().split())
a=list(map(int,input().split()))
a.sort(reverse=True)
k=a[0]-k
print('0' if k<0 else k)
