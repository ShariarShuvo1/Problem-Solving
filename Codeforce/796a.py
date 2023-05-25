house,gf,money=map(int,input().split())
lst=list(map(int,input().split()))
left,right=(0,0)
for i in range(gf-2,-1,-1):
    if lst[i]!=0:
        if lst[i]<=money:
            left=i+1
            break
        else:
            left=False
for j in range(gf,len(lst)):
    if lst[j]!=0 and lst[j]<=money:
        right=j+1
        break
    else:
        right=False
if left==False:
    house=right
elif right==False:
    house=left
elif gf-left<right-gf:
    house=left
else:
    house=right
print(abs(gf-(house))*10)