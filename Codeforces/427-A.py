n=int(input())
ara=list(map(int,input().split()))
cnt=0
police=0
for i in range(n):
    if(ara[i]==-1):
        if police:
            police-=1
        else:
            cnt+=1
    else:
        if ara[i]<=10
            police+=ara[i]
        else:
            police+=10
print(cnt)