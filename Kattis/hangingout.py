now = 0
c = ""
k = 0
cnt = 0
n, m = map(int, input().split())
for i in range(m):
    a = input()
    c, k = a.split(' ')
    if c[0] == 'e':
        if now + int(k) <= n:
            now += int(k)
        else:
            cnt += 1
    else:
        now-=int(k)
        now=max(now,0)
print(cnt)
