for run in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort(reverse=True)
    for i in range(k):
        if a[i]<b[i]:
            a[i]=b[i]
    sum=0
    for ele in a:
        sum+=ele
    print(sum)