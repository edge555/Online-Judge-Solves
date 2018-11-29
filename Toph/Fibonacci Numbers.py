fib=[]
fib.append(1)
fib.append(1)
for i in range(2,51):
    fib.append(fib[i-1]+fib[i-2])
n=int(input())
print(fib[n-1])
