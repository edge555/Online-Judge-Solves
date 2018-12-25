n=int(input())
a=list(map(int,input().split()))
x=0
y=0
for i in a:
    if(i%2):
        y+=1
    else:
        x+=1
print("READY FOR BATTLE" if x>y else "NOT READY")
