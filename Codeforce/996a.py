n=int(input())
bill= n//100
n=n-(100*(n//100))
bill+=n//20
n=n-(20*(n//20))
bill+=n//10
n=n-(10*(n//10))
bill+=n//5
n=n-(5*(n//5))
bill+=n
print(bill)