a=input()
b=input()
c=int(a)+int(b)
x=""
for i in range(len(a)):
    if(a[i]!='0'):
        x+=a[i]
y=""
for i in range(len(b)):
    if(b[i]!='0'):
        y+=b[i]
s=str(c)
z=""
for i in range(len(s)):
    if(s[i]!='0'):
        z+=s[i]
print('YES' if int(x)+int(y)==int(z) else 'NO')
