a=[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71 , 73, 79, 83, 89, 97]
for i in range(int(input())):
    n=int(input())
    space=False
    cnt=0
    for j in range(25):
        if n%a[j]==0:
            if space:
                print(" ",end="")
            print("%d"%(j+1),end="")
            cnt+=1
            space=True
    if cnt==0:
        print(-1)
    else:
        print("")