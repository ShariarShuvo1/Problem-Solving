a,b,c,d=map(int,input().split())
m=max(3*a/10,a-a/250*c)
n=max(3*b/10,b-b/250*d)
if m>n:
    print('Misha')
elif m==n:
    print('Tie')
else:
    print ('Vasya')