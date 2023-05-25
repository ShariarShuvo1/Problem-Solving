n,m=map(int,input().split())
flag=True
for run in range(n):
    s=input()
    new=''
    for ele in s:
        if ele not in new:
            new+=ele
    if len(new)>1:
        flag=False
        break
    if run==0:
        temp=s
    else:
        if s==temp:
            flag=False
            break
        else:
            temp=s
if flag:
    print('YES')
else:
    print('NO')