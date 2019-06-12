tc=int(input())
for t in range(tc):
    n=int(input())
    print("Case %d: " % (t+1),end="")
    if(n<=2):
        print("Tie")
    else:
        if(n&1):
            print("CodeNewtons")
        else:
            print("CodeMask")
