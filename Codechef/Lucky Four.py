tc=int(input())
for i in range(tc):
    a=input()
    cnt=0
    for j in range(len(a)):
        if(a[j]=='4'):
            cnt+=1
    print(cnt)
