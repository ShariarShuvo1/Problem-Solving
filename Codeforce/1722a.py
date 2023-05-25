for run in range(int(input())):
    n=int(input())
    name=input()
    x_len=5
    if n!=x_len:
        print('NO')
    else:
        if 'T' in name and 'i' in name and 'm' in name and 'u' in name and 'r' in name:
            print('YES')
        else:
            print('NO')