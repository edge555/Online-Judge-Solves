n=int(input())
for i in range (1,n+1):
    a,b,c=map(int, input().split())
    if a<=20 and b<=20 and c<=20:
        print("Case %d: good"%i)
    else:
        print("Case %d: bad"%i)
