n=int(input())
lst=list(map(int,input().split()))
t=max(lst)
tall=lst.index(t)
lst.remove(t)
lst.insert(0,t)
lst.reverse()
short=lst.index(min(lst))
print(tall+short)