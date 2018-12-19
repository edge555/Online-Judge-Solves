import string
def swap(char):
    if char in string.ascii_uppercase:
        return char.lower()
    else:
        return char.upper()
def swap_case(s):
    k=len(s)
    a=""
    for i in range (k):
        a+=swap(s[i])
    return a
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
