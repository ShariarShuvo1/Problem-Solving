import math as m
n=int(input())
lst=list(map(int,input().split()))
check=m.ceil(n/2)
for i in range(-1,2,2):
    temp=lst.copy()
    count=0
    for j in range(n):
        temp[j]=temp[j]/i
    for ele in temp:
        if ele>0:
            count+=1
    if count>=check:
        break
if count>=check:
    print(i)
else:
    print(0)