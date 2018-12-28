n=int(input())
for i in range(n):
    k=int(input())
    if(k<1500):
        a=float(k*.1)
        b=float(k*.9)
    else:
        a=500
        b=k*.98
    k=float(k+a+b)
    print(format(k,'0.2f'))
