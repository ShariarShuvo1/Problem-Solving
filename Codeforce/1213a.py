n=int(input())
lst=list(map(int,input().split()))
val=0
for ele in lst:
    val+= ele%2
print(min(val,n-val))