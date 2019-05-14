for i in range (int(input())):
    a,b=map(int,input().split())
    print('crash' if b==0 or a%b!=0 else 'safe')