for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    lst.sort()
    if n>1:
        possible=False
        for i in range(1,n):
            if lst[i]-lst[i-1]==1 or lst[i]-lst[i-1]==0:
                possible=True
            else:
                possible=False
                break
        if possible:
            print('YES')
        else:
            print('NO')
    else:
        print('YES')