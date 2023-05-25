import math as m
a=int(input())
b=int(input())
if b<a:
    a,b=b,a
d=a+m.ceil(abs(a-b)/2)
x=d-a
y=b-d
stress=0
for i in range(1,x+1):
    stress+=i
for i in range(1,y+1):
    stress+=i
print(stress)