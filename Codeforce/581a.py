r,b=map(int,input().split())
h,l=max(r,b),min(r,b)
if h==l:
    dif=h
    same=0
else:
    dif=l
    same=h-l
if same!=0:
    if same%2!=0:
        same-=1
print(dif,same//2)