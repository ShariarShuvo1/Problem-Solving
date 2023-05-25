for run in range(int(input())):
    a,b=map(int,input().split())
    x=a-b
    if x==1:
        print('NO')
    else:
        print('YES')