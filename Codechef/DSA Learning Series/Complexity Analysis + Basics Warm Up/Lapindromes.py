def lapin(a):
    b=""
    c=""
    i=0
    j=len(a)-1
    while i<j:
        b+=a[i]
        c+=a[j]
        i+=1
        j-=1
    return sorted(b)==sorted(c)
for i in range(int(input())):
    print('YES' if lapin(input()) else 'NO')