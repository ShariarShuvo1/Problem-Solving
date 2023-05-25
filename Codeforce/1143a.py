d=int(input())
door=list(map(int,input().split()))
zero=door.count(0)
one=door.count(1)
count=0
for i in door:
    if i==0:
        zero-=1
        count+=1
    else:
        one-=1
        count+=1
    if zero==0 or one==0:
        break
print(count)
