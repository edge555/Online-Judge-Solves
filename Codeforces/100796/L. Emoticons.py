n=int(input())
a=input()
happy=0
sad=0
for i in range(0,n-1):
    c=a[i]+a[i+1]
    if c==":)" or c=="(:":
        happy+=1
    elif c==":(" or c=="):":
        sad+=1
if sad==happy:
    print("BORED")
elif sad>happy:
    print("SAD")
else:
    print("HAPPY")
