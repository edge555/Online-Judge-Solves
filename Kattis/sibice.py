n,w,h=map(int,input().split())
area=w*w+h*h
for i in range(n):
    k=int(input())
    print("DA" if k*k<=area else "NE")