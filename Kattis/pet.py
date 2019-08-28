mx=-1
winner=0
for i in range(5):
    a,b,c,d=map(int,input().split())
    a=a+b+c+d
    if a>mx:
        mx=a
        winner=i
print("%d %d"%(winner+1,mx))