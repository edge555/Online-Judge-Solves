import sys
fact=[1]*6000
a=1
for i in range(1,1001):
    a*=i
    fact[i]=a
while True:
    try:
        n = int(input())
        print(n,end = '')
        print('!')
        print(fact[n])
    except EOFError:
        break
