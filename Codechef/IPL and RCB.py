tc=int(input())
for t in range(tc):
    a,b=input().split()
    print(0 if int(a)<=int(b) else int(a)-int(b))
