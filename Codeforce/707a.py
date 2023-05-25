x,y=map(int,input().split())
lst=list()
for i in range(x):
    n=input()
    if len(n)>1:
        n=n.split()
        for ele in n:
            lst.append(ele)
    else:
        lst.append(n)
if 'C' in lst or 'M' in lst or 'Y' in lst:
    print('#Color')
else:
    print('#Black&White')