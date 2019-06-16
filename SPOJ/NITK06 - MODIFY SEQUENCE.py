tc=int(input())
for t in range(tc):
    n=int(input())
    a=list(map(int,input().split()))
    sum=0
    for i in range(len(a)):
        sum=a[i]-sum
    print("YES" if sum==0 else "NO")
