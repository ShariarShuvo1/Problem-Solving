for run in range(int(input())):
    w,h,n=map(int,input().split())
    if n==1:
        print('YES')
    elif w%2==1 and h%2==1:
        print('NO')
    else:
        x=1
        while w>0:
            if w%2==0:
                x*=2
                w=w//2
            else:
                break
        while h>0:
            if h%2==0:
                x*=2
                h=h//2
            else:
                break
        if x>=n:
            print('YES')
        else:
            print('NO')
