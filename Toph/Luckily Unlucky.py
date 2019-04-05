n=int(input())
a=list(map(int,input().split()))
cnt=0
for i in range (len(a)):
    if a[i]%7==0:
        cnt+=1
print("Luckily Unlucky" if cnt==13 else "Lucky")
