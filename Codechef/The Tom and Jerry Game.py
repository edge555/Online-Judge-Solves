tc = int(input())
for _ in range(tc):
    n = int(input())
    while n%2==0:
        n>>=1
    print(n//2)