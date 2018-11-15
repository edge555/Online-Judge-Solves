import math
n=int(input())
k=0
for i in range(1,(int)(math.sqrt(n))+1):
    if n%i==0:
        if((int)(n/i)!=i):
            k+=2
        else:
            k+=1
print(k-1)
