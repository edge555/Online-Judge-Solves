n=int(input())
for i in range(n):
    a=input()
    b=''.join(sorted(a))
    k=len(a)
    print('-1' if b[0]==b[k-1] else b)
