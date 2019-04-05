import math
n=int(input())
lim=math.ceil(math.sqrt(n));
sum=1
for i in range (2,lim):
    if(n%i==0):
        sum+=i
        p=int(n/i)
        if p!=i:
            sum+=p
print("Perfect" if n!=1 and n==sum else "Not Perfect")