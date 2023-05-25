def sortFn(ls):
    return ls[0]
for _ in range(int(input())):
    n=int(input())
    lst=list()
    for run in range(n):
        a,b=map(int,input().split())
        if a>b:
            lst.append((a,b))
        else:
            lst.append((b,a))
    lst.sort(reverse=True,key=sortFn)
    perimeter=0
    for i in range(n):
        lenth=lst[i][0]
        width=lst[i][1]
        perimeter+=2*(lenth+width)
        if i>0:
            perimeter-=min(lenth, lst[i-1][0])
        if i<n-1:
            perimeter-=min(lenth, lst[i+1][0])
    print(perimeter)