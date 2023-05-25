ans=0
m=6969
for run in range(int(input())):
    a,b=map(int,input().split())
    m=min(m,b)
    ans+=a*m
print(ans)