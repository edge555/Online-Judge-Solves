s,v1,v2,p1,p2=map(int,input().split())
f=p1*2+v1*s
s=p2*2+v2*s
if f<s:
    print("First")
elif(s<f):
    print("Second")
else:
    print("Friendship")