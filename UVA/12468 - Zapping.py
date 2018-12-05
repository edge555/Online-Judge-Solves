while True:
    x,y=map(int, input().split())
    if(x==-1 and y==-1):
        exit(0)
    a=abs(x-y)
    if(a>=50):
        a=100-a
    print(a)
