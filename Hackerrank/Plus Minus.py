n=int(input())
a=list(map(int,input().split()))
pos=0
neg=0
zero=0
for i in range(n):
    if(a[i]==0):
        zero+=1
    elif(a[i]>0):
        pos+=1
    else:
        neg+=1
print("%.6f\n%.6f\n%.6f" %(pos/n,neg/n,zero/n))
