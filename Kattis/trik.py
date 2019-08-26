a=input()
now = 1
for i in range(len(a)):
    if a[i]=='A':
        if now==1:
            now=2;
        elif now==2:
            now=1
    elif a[i]=='B':
        if now==2:
            now=3
        elif now==3:
            now=2
    else:
        if now==1:
            now=3
        elif now==3:
            now=1
print(now)
