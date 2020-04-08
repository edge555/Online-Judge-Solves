a,b=input().split(' ')
ans=0
for i in range(len(a)):
    diff=int(abs(int(a[i])-int(b[i])))
    ans=ans*10+diff
print(ans)
