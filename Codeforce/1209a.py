n=int(input())
lst=list(map(int,input().split()))
temp=lst.copy()
count=0
while len(lst) !=0:
    m=min(lst)
    count+=1
    for ele in lst:
        if ele%m==0:
            temp.remove(ele)
    lst=temp.copy()
print(count)