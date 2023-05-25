import math as m
n,k=map(int,input().split())
f=n//k
if f*k== int((n/k)*k):
    factor=m.ceil(n/k)+1
else:
    factor=m.ceil(n/k)
print(factor*k)