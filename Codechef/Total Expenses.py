n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    c=a*b
    if(a>1000):
        c-=(c*.1)
    print(format(c,'0.6f'))
