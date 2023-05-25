name1=input()
name2=input()
name=name1+name2
lst=list()
for run in name:
    lst.append(run)
words=input()
available=True
for i in words:
    if i in lst:
        lst.remove(i)
    else:
        available=False
if available and len(lst)==0:
    print("YES")
else:
    print("NO")