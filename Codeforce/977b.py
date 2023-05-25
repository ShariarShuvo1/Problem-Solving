n=int(input())
st=input()
dct=dict()
i=1
while i<n:
    s=st[i-1:i+1]
    if s in dct:
        dct[s]+=1
    else:
        dct[s]=1
    i+=1
k,v=0,0
for key,val in dct.items():
    if val>v:
        k,v=key,val
print(k)