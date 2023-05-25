r1=list(map(int,input().split()))
r2=list(map(int,input().split()))
r3=list(map(int,input().split()))
r4=list(map(int,input().split()))
r5=list(map(int,input().split()))
rList=[r1,r2,r3,r4,r5]
row=0
col=0
for i in range(5):
    for j in range(5):
        if rList[i][j]==1:
            row=i
            col=j
            break
count= abs(2-row)+abs(2-col)
print(count)
