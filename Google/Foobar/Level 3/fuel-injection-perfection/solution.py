import math
def solution(n):
    cnt = 0
    n = int(n)
    while n>1:
        if n%2==1:
            x = n-1
            y = n+1
            zerox = 0
            zeroy = 0
            while x%2==0:
                x=x//2
                zerox+=1
            while y%2==0:
                y=y//2
                zeroy+=1
            if zeroy>zerox and n!=3:
                n+=1
            else:
                n-=1
        else:
            n = n//2
        cnt+=1
    return cnt