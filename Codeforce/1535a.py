for run in range(int(input())):
    lst=list(map(int,input().split()))
    m1=max(lst)
    lst2=lst.copy()
    lst2.remove(m1)
    m2=max(lst2)
    x1=max(lst[0:2])
    x2=max(lst[2:])
    if m1 in (x1,x2) and m2 in (x1,x2):
        print('YES')
    else:
        print('NO')
