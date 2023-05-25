k=int(input())
lst=list(map(int,input().split()))
lst.sort(reverse=True)
month=0
if k<1:
    print(0)
elif sum(lst)<k:
    print(-1)
else:
    sum=0
    for ele in lst:
        sum+=ele
        month+=1
        if sum>=k:
            break
    print(month)