n=int(input())
tri=False
i=0
j=1
while i<=n:
    i+=j
    j+=1
    if i==n:
        tri=True
        break
if tri or n==0:
    print('YES')
else:
    print('NO')