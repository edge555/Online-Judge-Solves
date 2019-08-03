for t in range(int(input())):
    n=int(input())
    print("Case %d: "%(t+1),end="")
    print("Oh no, my eggs! :(" if n%7<2 else "No eggs for you! :D")