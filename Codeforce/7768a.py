n=int(input())
lst=list(map(int,input().split()))
mx=max(lst)
m=lst.count(mx)
mn=min(lst)
n=lst.count(mn)
ans=max(0,len(lst) - m - n)
print(ans)