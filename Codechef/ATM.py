x,y =[float(x) for x in input().split()]
if x<y-0.5:
    if x%5==0:
        y-=float(x)+0.50
        print(format(y,'0.2f'))
    else:
        print(format(y,'0.2f'))
else:
    print(format(y,'0.2f'))
