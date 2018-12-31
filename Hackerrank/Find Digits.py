tc=int(input())
for i in range(tc):
    n=int(input())
    m=n
    cnt=0
    while(m!=0):
        k=m%10
        m=int(m/10)
        if(k!=0):
            if(n%k==0):
                cnt+=1
    print(cnt)
