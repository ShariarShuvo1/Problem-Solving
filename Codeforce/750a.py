n,k=map(int,input().split())
time=240-k
t=1
tm =0
prob=0
while t<n+1:
    tm+=5*t
    if tm<time:
        t+=1
        prob+=1
    elif tm==time:
        prob+=1
        break
    else:
        break
print(prob)