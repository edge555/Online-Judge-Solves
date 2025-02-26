a=input()
b=a[0]
for i in range(1,len(a)):
    if(a[i]=='-'):
        b+=a[i+1]
print(b)