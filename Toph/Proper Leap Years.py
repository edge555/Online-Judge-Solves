def leap(n):
    ans=True
    if(n%400==0):
        ans=True
    elif(n%100==0):
        ans=False
    elif(n%4!=0):
        ans=False
    return ans
n=int(input())
print('Yes' if leap(n) else 'No')
