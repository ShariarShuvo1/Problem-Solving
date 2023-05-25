for run in range(int(input())):
    a,b,c,n=map(int,input().split())
    lst=[a,b,c]
    lst.sort()
    m=lst[-1]
    x=m-lst[0]
    y=m-lst[1]
    if x+y<=n:
        z=x+y
        f=n-z
        s=int(f//3)
        if s*3==f:
            print('YES')
        else:
            print("NO")
    else:
        print('NO')