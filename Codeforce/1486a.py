for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    idx,val=0,0
    able=True
    for i in range(n):
        idx+=i
        val+=lst[i]
        if val<idx:
            able=False
            break
    if able:
        print('YES')
    else:
        print('NO')
#Took hints