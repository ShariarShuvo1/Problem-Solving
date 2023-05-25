n,m=map(int,input().split())
dct=dict()
for i in range(n):
    a,b=input().split()
    dct[b] =a
for i in range(m):
    a,b = input().split()
    print(a,b,"#"+dct[b[:len(b)-1]])