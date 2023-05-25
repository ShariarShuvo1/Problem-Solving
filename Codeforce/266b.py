n,t=map(int,input().split())
st=input()
arr=list()
for ele in st:
    arr.append(ele)
for run in range(t):
    i=len(arr)-1
    while i>-1:
        if arr[i] == 'G' and (i-1)>=0 and arr[i-1]=='B':
            arr[i],arr[i-1]=arr[i-1],arr[i]
            i-=2
        else:
            i-=1
new_st='' 
for ele in arr:
    new_st+=ele
print(new_st)