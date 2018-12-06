def middle(x,y,z):
    return sorted([x,y,z])[1]
n=int(input())
for i in range(n):
    x,y,z=map(int, input().split())
    print("Case %d: %d" % ((i+1),(middle(x,y,z))))
