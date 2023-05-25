n = int(input())
lst = list()
for i in range(1, n):
    for j in range(i, n+1):
        if i+j == n and i<j:
            lst.append((i, j))
new = list()
for ele in lst:
    a_divisor = list()
    b_divisor = list()
    ok = True
    for i in range(1, ele[0]+1):
        if ele[0] % i == 0 and i != 1:
            a_divisor.append(i)
    for i in range(1, ele[1]+1):
        if ele[1] % i == 0 and i != 1:
            b_divisor.append(i)
    for i in a_divisor:
        if i not in b_divisor:
            ok = True
        else:
            ok = False
            break
    if ok:
        new.append(ele)
a, b = new[-1]
print(a,b)