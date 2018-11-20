n=int(input())
k=0
for i in range(2,n+1):
    if(n%i==0):
      k+=1
print('Yes' if k==1 else 'No')
