a,b=map(int,input().split())
if(a<=b):
    print(2)
else:
    c=(2*a)/b
    if((2*a)%b!=0):
        c=c+1
    print((int)(c))
