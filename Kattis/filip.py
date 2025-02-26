def rev(s):
    k=0
    while(s>0):
        k*=10
        k+=s%10
        s=s//10
    return k
a,b=map(int,input().split())
a=rev(a)
b=rev(b)
print(max(a,b))