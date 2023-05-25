total,k=map(int,input().split())
arr = list(map(int,input().split()))
maxVal = arr[k-1]
count=0
for ele in arr:
    if ele>0 and ele>=maxVal:
        count+=1
print(count)