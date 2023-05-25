n,m=map(int,input().split())
game=list(map(int,input().split()))
cash=list(map(int,input().split()))
g,c=0,0
total=0
while c<m and g<n:
    if game[g]<=cash[c]:
        total+=1
        c+=1
        g+=1
    else:
        g+=1
print(total)