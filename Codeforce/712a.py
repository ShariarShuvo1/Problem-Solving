n=int(input())
lst=list(map(int,input().split()))
lst2=list()
for i in range(1,n):
    lst2.append(lst[i]+lst[i-1])
lst2.append(lst[-1])
st=str(lst2[0])
for i in  range(1,len(lst2)):
    st+=f' {lst2[i]}'
print(st)