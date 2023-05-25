lst=list(map(int,input().split()))
dct=dict()
for ele in lst:
    if ele not in dct and lst.count(ele)>=2:
        dct[ele]=lst.count(ele)
if len(dct)==1:
    tot=0
    for k,v in dct.items():
        if v>3:
            v=3
        tot=k*v
    print(sum(lst)-tot)
elif len(dct)>1:
    tot=[]
    for k,v in dct.items():
        if v>3:
            v=3
        tot.append(k*v)
    print(sum(lst)-max(tot))
else:
    print(sum(lst))