n,m=map(int,input().split())
socks=n+1
day=0
i=1
while i<socks:
    day+=1
    if day%m==0:
        continue
    else:
        i+=1
print(day)