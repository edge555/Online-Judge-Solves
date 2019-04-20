a,b,c=map(int,input().split())
k=a%b
p=a
if k:
    p+=b-k
exist=False
for i in range(p,c+1,b):
    if i-a>0:
        exist=True
        print("%d " % (i-a),end="")
if exist==False:
    print("-1")
