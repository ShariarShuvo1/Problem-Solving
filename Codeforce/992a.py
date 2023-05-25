n=int(input())
lst=list(map(int,input().split()))
new=set()
for ele in lst:
    if ele!=0:
        new.add(ele)
print(len(new))