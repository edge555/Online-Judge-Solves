n=int(input())
ara=list(map(int,input().split()))
ara2=list(map(int,input().split()))
sum=0
for i in range (n):
    sum+=ara[i]
ara2.sort(reverse=True)
print('YES' if ara2[0]+ara2[1]>=sum else 'NO')
