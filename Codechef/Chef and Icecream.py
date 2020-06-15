tc = int(input())
for _ in range(tc):
    n = int(input())
    a = list(map(int,input().split()))
    coin5 = 0
    coin10 = 0
    coin15 = 0
    f = True
    for i in range(n):
        if a[i] == 5:
            coin5 +=1
        elif a[i] == 10:
            if coin5 >= 1:
                coin5-=1
                coin10+=1
            else:
                f = False
                break
        else:
            if coin10 >= 1:
                coin10-=1
                coin15+=1
            elif coin5 >= 2:
                coin5-=2
                coin15+=1
            else:
                f = False
                break
    print('YES' if f else 'NO')
