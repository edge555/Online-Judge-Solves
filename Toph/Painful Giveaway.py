n=int(input())
for i in range(min(0,n),max(0,n)+1):
    print(i,end="")
    if i!=max(0,n):
        print(" ",end="")