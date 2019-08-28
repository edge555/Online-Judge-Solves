sum=0
for i in range(int(input())):
    n=int(input())
    p=n%10
    n=n//10
    sum+=pow(n,p)
print(sum)