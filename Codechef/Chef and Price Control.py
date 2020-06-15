tc = int(input())
for _ in range(tc):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    sum = 0
    for i in range(n):
        if a[i]>k:
            sum+=a[i]-k
    print(sum)