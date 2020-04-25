def rev(x):
    s=0
    while x!=0:
        s*=10
        s+=x%10
        x//=10
    return s
t=int(input())
for i in range(t):
    p=int(input())
    print(rev(p))