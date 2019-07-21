n=int(input())
a=list(map(int,input().split()))
sum=0;
for i in range(n):
	sum+=a[i]&1
print(sum if sum<n else "-1")