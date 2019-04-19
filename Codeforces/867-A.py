n=int(input())
s=input()
sf=0
st=0
for i in range(1,n):
    if(s[i]!=s[i-1]):
        if(s[i]=='F'):
            sf+=1
        else:
            st+=1
print('YES' if sf>st else 'NO')
