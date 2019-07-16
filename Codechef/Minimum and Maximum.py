tc=int(input())
for t in range(tc):
    n=int(input())
    k=int(input())
    x=k%n
    y=n-x
    if x==y:
        print((2*x)-1)
    else:
        print(2*min(x,y))