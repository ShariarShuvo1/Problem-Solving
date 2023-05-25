n=int(input())
lst=list(map(int,input().split()))
lst.sort(reverse=True)
num = 0
if n==1:
    print(1)
else:
    for i in range(1,n):
        x=lst[0:i]
        y=lst[i:]
        if sum(x)>sum(y):
            num=len(x)
            break
        elif sum(x)==sum(y) and i==n-1:
            num=len(lst)
            break
    print(num)