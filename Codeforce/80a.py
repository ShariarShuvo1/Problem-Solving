prime=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53]
n,m=map(int,input().split())
n_idx=prime.index(n)
if prime[n_idx+1]==m:
    print('YES')
else:
    print('NO')