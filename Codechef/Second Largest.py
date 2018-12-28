n=int(input())
for i in range(n):
    a=list(map(int,input().split()))
    a.sort()
    print(a[1])
