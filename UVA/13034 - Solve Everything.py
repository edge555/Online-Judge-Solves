n=int(input())
for i in range (n):
    a=list(map(int,input().split()))
    chk=False
    for j in range (len(a)):
        if(a[j]==0):
            chk=True
    if chk:
        print("Set #%d: No"%(i+1))
    else:
        print("Set #%d: Yes"%(i+1))
