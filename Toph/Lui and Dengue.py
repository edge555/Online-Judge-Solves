def sum(a,d,n):
    tot = (n*(2*a+(n-1)*d))/2
    return tot
for i in range(int(input())):
    for j in range(int(input())):
        a,d,n = map(int,input().split())
        print(int(sum(a,d,n)))