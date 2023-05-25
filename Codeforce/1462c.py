for run in range(int(input())):
    n=int(input())
    lst=list()
    s,l=0,9
    while s<n and l>0:
        lst.append(min(n-s,l))
        s+=l
        l-=1
    if s<n:
        print(-1)
    else:
        lst.reverse()
        print(*lst,sep='')
#Took Hint