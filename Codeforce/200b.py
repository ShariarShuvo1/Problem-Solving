n=int(input())
lst=list(map(int,input().split()))
sum=0
for ele in lst:
    sum+=ele
print(sum/n)