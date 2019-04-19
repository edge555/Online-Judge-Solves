n,m= map(int,input().split())
k=0
ara=list(map(int,input().split()))
for i in range (n):
    if ara[i]>m:
        k+=2
    else:
        k+=1
print(k)
