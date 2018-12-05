n=int(input())
for i in range(n):
    a=list(map(int, input().split()))
    mx=-1
    for j in range (1,len(a)):
        if(a[j]>mx):
            mx=a[j]
    print("Case %d: %d" % ((i+1),mx))
