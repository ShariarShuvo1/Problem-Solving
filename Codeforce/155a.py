n=int(input())
lst=list(map(int,input().split()))
amazing=0
val=0
for i in range(len(lst)):
    if i==0:
        val=lst[i]
        mx,mn=(val,val)
    else:
        if lst[i]> mx:
            amazing+=1
            mx=lst[i]
        elif lst[i]<mn:
            amazing+=1
            mn=lst[i]
print(amazing)
