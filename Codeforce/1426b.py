for run in range(int(input())):
    doIt=False
    n,m=map(int,input().split())
    for i in range(n):
        a,b=map(int,input().split())
        c,d=map(int,input().split())
        if b==c and m%2==0:
            doIt=True
    if doIt:
        print('YES')
    else:
        print('NO')