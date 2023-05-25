n,m,money=map(int,input().split())
lst1=list(map(int,input().split()))
lst2=list(map(int,input().split()))
min_lst1=min(lst1)
num=money//min_lst1
max_lst2=max(lst2)
total=max_lst2*num
total+= money-(num*min_lst1)
if total>money:
    print(total)
else:
    print(money)