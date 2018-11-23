import math
while True:
    n=int(input())
    a=str(n);
    a=a[::-1]
    if(a!=str(n)):
        print(2*n)
    else:
        if(n==1 or n==2):
            print(n*2)
            exit(0)
        else:
            if(n%2==0):
                print(2*n)
            else:
                k=1
                for i in range(3,int(math.sqrt(n)+1),2):
                    if(n%i==0):
                        k+=1
                        break
                print(2*n)
                if(k==1):
                    exit(0)
