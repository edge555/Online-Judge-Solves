tc=1
while(True):
    n=int(input())
    if(n==0):
        exit(0)
    cnt=0
    a=list(map(int, input().split()))
    for i in range (len(a)):
        if(a[i]==0):
            cnt+=1
    print("Case %d: %d" % (tc,n-(2*cnt)))
    tc+=1
