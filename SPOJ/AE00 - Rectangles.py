import math
n=int(input())
sum=0
for i in range(1,n+1):
    cnt=1
    k=math.sqrt(i)
    for j in range(2,int(k)+1):
        if(i%j==0):
            cnt+=1
    sum+=cnt
print(sum)
