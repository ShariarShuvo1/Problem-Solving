k,n,w=map(int,input().split())
cost=0
for i in range(1,w+1):
    cost+=(k*i)
borrow=cost-n
if borrow<0:
    borrow=0
print(borrow)