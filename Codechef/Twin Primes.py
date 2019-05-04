prime=[True for _ in range(100005)]
def sieve(limit):
    prime[0:1]=[False,False]
    for start in range(2,limit+1):
        if prime[start]:
            for i in range(2*start,limit+1,start):
                prime[i]=False

n=100003
sieve(n)
for i in range(int(input())):
    n=int(input())
    cnt=0
    if prime[n]:
        if prime[n+2]:
            cnt+=1
        if prime[n-2]:
            cnt+=1
    print(cnt)