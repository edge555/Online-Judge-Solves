y=int(input())
k=2
if (y%4)==0:
   if (y%100)==0:
       if(y%400)!=0:
           k=1
   else:
       k=1
print('Yes' if k==1 else 'No')
