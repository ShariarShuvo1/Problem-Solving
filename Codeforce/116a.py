t=int(input())
lst=list()
for run in range(t):
    ex,en=map(int,input().split())
    if run==0:
        current=en
    else:
        current-=ex
        current+=en
    lst.append(current)
print(max(lst))