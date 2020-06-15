tc = int(input())
for _ in range(tc):
    n = int(input())
    if n&1:
        now = 1
        for i in range(n):
            for j in range(n):
                print("%d "%(now),end="")
                now+=1
            print("")
    else:
        even = 2
        odd = 1
        for i in range(n):
            for j in range(n):
                if i&1:
                    if j&1:
                        print("%d "%(odd),end="")
                        odd+=2
                    else:
                        print("%d "%(even),end="")
                        even+=2
                else:
                    if j&1:
                        print("%d "%(even),end="")
                        even+=2
                    else:
                        print("%d "%(odd),end="")
                        odd+=2
            print("")