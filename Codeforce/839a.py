n,k=map(int,input().split())
lst=list(map(int,input().split()))
count=0
total=0
for ele in lst:
    count+= ele
    m= min(8,count)
    count-=m
    k-=m
    total+=1
    if k<=0:
        break
if k>0:
    print(-1)
else:
    print(total)
