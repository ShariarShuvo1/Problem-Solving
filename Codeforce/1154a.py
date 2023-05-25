lst=list(map(int,input().split()))
lst.sort()
a,b,c,d=lst
y=(c-b+a)//2
z=b-a+y
x=a-y
print(x,y,z)