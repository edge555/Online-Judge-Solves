a=list(map(int, input().split()))
x=a[0]
v=a[1]
xx=a[2]
vv=a[3]
if(xx>=x and vv>v):
    print("NO")
    exit(0)
if(v==vv and xx>x):
    print("NO")
    exit(0)
while(x<=xx):

    if(x==xx):
        print("YES")
        exit(0)
    x+=v
    xx+=vv
print("NO")
