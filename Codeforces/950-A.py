import math
l,r,a=map(int,input().split())
mn=min(l,r)
req=max(l,r)-mn
if(a>=req):
    a-=req
    mn+=req
    if a&1:
        a-=1
    ans=a+mn*2
else:
    mn+=a;
    ans=2*mn
print(ans)