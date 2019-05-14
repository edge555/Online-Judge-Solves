V=list("aeiouy")
C=list("bcdefghjklmnpqrstvwxyz")
a=input()
for i in reversed(a.lower()):
    if i in V:
        print("YES")
        break
    elif i in C:
        print("NO")
        break