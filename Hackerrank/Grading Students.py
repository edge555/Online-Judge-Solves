tc=int(input())
for i in range(tc):
    n=int(input())
    if(n<38):
        print(n)
    else:
        p=int(n/5)
        p+=1;
        p*=5
        print(p if p-n<3 else n)
