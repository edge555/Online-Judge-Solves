tc = int(input())
for _ in range(tc):
    a = input()
    x = 0
    y = 0
    cnt = 0
    for i in range(len(a)):
        if a[i]=='x':
            x = 1
        else:
            y = 1
        if x+y==2:
            cnt+=1
            x = 0
            y = 0
    print(cnt)