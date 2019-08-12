for _ in range(int(input())):
    a,b=map(int,input().split())
    print("NO" if a%(b*b)==0 else "YES")