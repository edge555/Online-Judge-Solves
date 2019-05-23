n=int(input())
r=0
l=0
for i in range(n):
    x,y=map(int,input().split())
    if(x>0):
        r+=1
    else:
        l+=1
print('Yes' if r<=1 or l<=1 else 'No')
