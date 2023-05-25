for run in range(int(input())):
    lst=list(map(int,input().split()))
    lst.sort()
    a,b,c=lst
    if a+b==c:
        print('YES')
    else:
        print('NO')