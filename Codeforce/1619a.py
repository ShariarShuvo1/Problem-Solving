for run in range(int(input())):
    s=input()
    if len(s)%2==1:
        print('No')
    else:
        if s[:(len(s)//2)] == s[len(s)//2:]:
            print('YES')
        else:
            print('NO')