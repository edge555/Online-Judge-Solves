t=1
while(True):
    b,s=map(int,input().split())
    if(s==0 and b==0):
        exit(0)
    print("Case %d: :-" %t,end="")
    t+=1
    if b<=1:
        print('\\')
    elif b<=s:
        print('|')
    elif(b>s):
        print('(')
