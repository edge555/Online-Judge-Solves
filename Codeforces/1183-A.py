def chk(n):
    p=0
    while(n):
        p+=n%10
        n=int(n/10)
    return p%4==0
n=int(input())
while(True):
    if(chk(n)):
        print(n)
        exit(0)
    else:
        n+=1
