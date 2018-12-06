while True:
    try:
         a,b,c=map(int, input().split())
         n=c-a
         print("Hunters win!" if b>int(n) else "Props win!")
    except EOFError:
        break
