n,total=map(int,input().split())
lst=list(map(int,input().split()))
time_need=sum(lst)+(n*10)-10
if time_need>total:
    print(-1)
else:
    print((total-sum(lst))//5)