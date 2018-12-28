n=100001
prime=[True for i in range(n+1)]
p=2
while (p*p<=n):
    if (prime[p]==True):
        for i in range(p*2,n+1,p):
            prime[i]=False
    p+=1
prime[1]=False
tc=int(input())
for i in range(tc):
    x=int(input())
    print('yes' if prime[x] else 'no')
