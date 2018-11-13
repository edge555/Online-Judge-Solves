def is_leap(year):
    ans=False
    if(year%4==0):
        ans=True
        if(year%100==0):
            ans=False
        if(year%400==0):
            ans=True

    return ans
