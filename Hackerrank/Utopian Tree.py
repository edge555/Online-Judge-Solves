a=[]
a.append(1);
for i in range(1,61):
    if(i%2==1):
        a.append(a[i-1]*2)
    else:
        a.append(a[i-1]+1)
t=int(input())
for i in range(t):
    n=int(input())
    print(a[n])
