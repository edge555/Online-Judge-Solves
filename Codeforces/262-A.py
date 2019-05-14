n,m=map(int,input().split())
s=input()
ara=s.split(" ")
ans=0
for i in range(n):
    cnt=0
    for j in range (len(ara[i])):
        if(ara[i][j]=='4' or ara[i][j]=='7'):
            cnt+=1
    if cnt<=m:
        ans+=1
print(ans)