a,c=map(int,input().split())
lst=list(map(int,input().split()))
lst.sort()
sum=0
for tv in range(c):
    if lst[tv]<=0:
        sum+=abs(lst[tv])
print(sum)