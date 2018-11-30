n=int(input())
for i in range (n):
    a=input()
    k=0;
    for j in range (len(a)):
        k+=int(a[j])
    print('NO' if k%3==1 else 'YES')
