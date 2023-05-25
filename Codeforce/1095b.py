x=int(input())
lst=list(map(int,input().split()))
lst.sort()
m=lst[-2]
n=lst[0]
m_m=lst[-1]
n_n=lst[1]
print(min(m-n,m_m-n_n))