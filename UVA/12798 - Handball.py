while True:
    try:
        n,m = map(int,input().split())
        cnt = 0
        for i in range (n):
            zero = False
            a = list(map(int,input().split()))
            for j in range(m):
                if a[j] == 0:
                    zero = True
            if not zero:
                cnt += 1
        print(cnt)
    except EOFError:
        break
