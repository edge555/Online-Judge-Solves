tc=int(input())
for i in range(tc):
    n,k=map(int(),input().split())
    a=list(map(int,input().split()))
    p=0
    for j in a:
        if(j<=0):
            p+=1;
    print('NO' if p>=k else 'YES')
