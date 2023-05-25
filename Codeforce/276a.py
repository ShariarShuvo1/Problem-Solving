n,t=map(int,input().split())
lst=list()
for run in range(n):
    a,b=map(int,input().split())
    if run==0:
        if b>t:
            joy= a-(b-t)
        else:
            joy=a
    else:
        if b>t:
            j= a-(b-t)
        else:
            j=a
        if j>joy:
            joy=j
print(joy)