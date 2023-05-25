n=int(input())
lst=list(map(int,input().split()))
s,d=(0,0)
for i in range(n):
    num=max(lst[0],lst[-1])
    if i%2==0:
        s+=num
    else:
        d+=num
    lst.remove(num)
print(s,d)