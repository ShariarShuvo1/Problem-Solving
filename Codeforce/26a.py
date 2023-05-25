n=int(input())
lst=[0]*(n+1)
for i in range(2,n):
    if lst[i]==0:
        for j in range(2*i,n+1,i):
            lst[j]+=1
print(lst.count(2))