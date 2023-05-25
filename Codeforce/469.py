n=int(input())
x=list(map(int,input().split()))
x=x[1:]
y=list(map(int,input().split()))
y=y[1:]
lst=list()
for i in range(1,n+1):
    lst.append(i)
lst2=list()
for i in x:
    lst2.append(i)
for i in y:
    lst2.append(i)
lst3=list()
for ele in lst2:
    if ele not in lst3 and ele!=0:
        lst3.append(ele)
lst3.sort()
if len(lst)==len(lst3):
    print('I become the guy.')
else:
    print('Oh, my keyboard!')