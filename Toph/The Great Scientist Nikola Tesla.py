import math
for _ in range(int(input())):
    a,b,c = map(int,input().split())
    print("Case %d: %d"%(_+1,pow(a,b,c)))
