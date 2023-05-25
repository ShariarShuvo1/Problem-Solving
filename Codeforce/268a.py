n=int(input())
lst=list()
for run in range(n):
    h,a=map(int,input().split())
    lst.append((h,a))
count=0
for i in range(n):
    for j in range(n):
        if lst[i][0] == lst[j][1] and i!=j:
            count+=1
print(count)