n,h=map(int,input().split())
lst=list(map(int,input().split()))
width=0
for i in lst:
    if i>h:
        width+=2
    else:
        width+=1
print(width)