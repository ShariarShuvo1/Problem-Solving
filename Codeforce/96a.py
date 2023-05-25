s=input()
one=s.split('0')
zero=s.split('1')
dan=False
for ele in one:
    if len(ele)>=7:
        dan=True
        break
for ele in zero:
    if len(ele)>=7:
        dan=True
        break
if dan:
    print('YES')
else:
    print("NO")