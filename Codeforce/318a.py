n,k=map(int,input().split())
if n%2==0:
    if k<=(n//2):
        print((k*2)-1)
    else:
        print((k*2)-n)
else:
    if k<=(n//2)+1:
        print((k*2)-1)
    else:
        print((k*2)-n-1)