n=int(input())
if n%2==1:
    odd_count=(n//2)+1
else:
    odd_count=(n//2)
odd=odd_count**2
sum=n*(n+1)//2
ans=sum-odd-odd
print(ans)