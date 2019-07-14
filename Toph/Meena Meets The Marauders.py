n,m=map(int,input().split())
sum=0
for _ in range(m):
	x,y,z=map(int,input().split())
	sum+=z
print(2*sum)