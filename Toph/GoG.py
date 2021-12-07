T = int(input())
for i in range(0, T):
	n, m = map(int, input().split())
	n = n * m
	print('Alice' if n%2!=0 else 'Bob')