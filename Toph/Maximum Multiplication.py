a,b,c=map(int,input().split())
mx=max(a,b)
mn=min(a,b)
diff=mx-mn
if(c>=diff):
    mn=mx
    c-=diff
else:
    mn+=c
    c=0
r=(int)(c/2)
mx+=r
mn+=r
c-=r*2
if(c):
    mx+=1
print(mx*mn)
