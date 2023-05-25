import math
n=int(input())
row=list()
col=list()
for i in range(n):
    s=input()
    l=list()
    for j in s:
        l.append(j)
    row.append(l)
m=0
while m<n:
    l=list()
    o=0
    while o<n:
        l.append(row[o][m])
        o+=1
    m+=1
    col.append(l)
sum=0
for r in row:
    a=r.count('C')
    sum+= math.comb(a, 2)
for r in col:
    a=r.count('C')
    sum+= math.comb(a, 2)
print(sum)