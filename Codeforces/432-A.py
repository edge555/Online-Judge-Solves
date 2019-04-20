n=int(input())
ara=list(map(int,input().split()))
a,b=map(int,input().split())
sum=0
for i in range(a-1,b-1):
    sum+=ara[i]
print(sum)
