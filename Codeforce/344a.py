n=int(input())
lst=list()
for run in range(n):
    lst.append(input())
count=0
for i in range(n):
    if i==0:
        count+=1
    else:
        if lst[i]==lst[i-1]:
            continue
        else:
            count+=1
print(count)