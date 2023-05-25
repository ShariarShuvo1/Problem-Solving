n=int(input())
lst=list(map(int,input().split()))
burls=0
m=max(lst)
for ele in lst:
    burls+=(m-ele)
print(burls)