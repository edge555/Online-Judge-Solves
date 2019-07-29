for _ in range (int(input())):
    n,a,b,c,d=map(int,input().split())
    r=a+b+c+d
    print("Yes" if 2*r>n else "No")