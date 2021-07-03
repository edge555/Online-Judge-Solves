def count_substring(string, sub_string):
    n = len(string)
    m = len(sub_string)
    cnt = 0
    for i in range (0,n-m+1):
        st = int(i)
        en = int(i+m)
        if string[st:en] == sub_string:
            cnt += 1
    return cnt


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)