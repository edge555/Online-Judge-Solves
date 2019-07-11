n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
mx=0
for i in range(n):
	mx=max(mx,(a[i]*20-b[i]*10))
print(mx)