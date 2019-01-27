tc=int(input())
for i in range (tc):
    l,n=map(int,input().split())
    p=int(9-n);
    print(l*n+(l-1)*p)
