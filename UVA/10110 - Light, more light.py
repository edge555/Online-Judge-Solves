import math
while(True):
    n=int(input())
    if(n==0):
        exit(0)
    p=int(math.sqrt(n))
    print('yes' if p**2==n else 'no')
