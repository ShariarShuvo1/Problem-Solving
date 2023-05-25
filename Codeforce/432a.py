n,k=map(int,input().split())
lst=list(map(int,input().split()))
new_list=list()
can=0
for i in lst:
    if 5-i>=k:
        new_list.append(i)
print(len(new_list)//3)