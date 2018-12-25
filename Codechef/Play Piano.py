n=int(input())
for i in range(n):
    a=input()
    k=len(a)
    ans=True
    for j in range(0,k,2):
        if a[j]==a[j+1]:
            ans=False
            break
    print('yes' if ans else 'no')
