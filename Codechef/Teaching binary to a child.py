def decimalToBinary(n):
    return bin(n).replace("0b","")
def binaryToDecimal(n):
    return int(n,2)

for _ in range(int(input())):
    a=input()
    k=int(input())
    a=binaryToDecimal(a)
    a+=k
    print(decimalToBinary(a))
