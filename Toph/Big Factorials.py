n=int(input())
k=1
for i in range(2,n+1):
    k*=i;
    k%=10000
print('0000' if k==0 else k)
