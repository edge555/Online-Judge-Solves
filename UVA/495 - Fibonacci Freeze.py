fib=[]
fib.append(0)
fib.append(1)
for i in range(2,5001):
    fib.append(fib[i-1]+fib[i-2])
while True:
    try:
        n=int(input())
        print("The Fibonacci number for %d is %d" %(n,fib[n]))
    except EOFError:
        break