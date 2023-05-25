import math as m
for run in range(int(input())):
    n,x=map(int,input().split())
    lst=list(map(int,input().split()))
    a=m.ceil(sum(lst)/x)
    new=list()
    for ele in lst:
        new.append(m.ceil(ele/x))
    b=sum(new)
    print(a,b)