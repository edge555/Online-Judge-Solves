n=int(input())
for i in range(n):
    a,b,c=map(int, input().split())
    print('no' if a*c>b else 'yes')
