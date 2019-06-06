n=int(input())
ara=list(map(int,input().split()))
sum=0
for i in range(n):
    sum+=ara[i]
p=int(sum/n)
print(n-1 if p*n!=sum else n)
