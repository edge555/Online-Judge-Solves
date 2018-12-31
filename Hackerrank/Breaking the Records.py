n=int(input())
a=list(map(int,input().split()))
mn=a[0]
mx=a[0]
mnc=0
mxc=0
for i in range(1,len(a)):
    if(a[i]>mx):
        mx=a[i]
        mxc+=1
    elif(a[i]<mn):
        mn=a[i]
        mnc+=1
print("%d %d" % (mxc,mnc))
