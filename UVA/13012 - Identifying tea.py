while True:
    try:
        n=int(input())
        cnt=0
        a=list(map(int, input().split()))
        for i in range(5):
            if(a[i]==n):
                cnt+=1
        print(cnt)
    except EOFError:
        break
