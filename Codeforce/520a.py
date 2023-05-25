n=int(input())
st=input().lower()
check='abcdefghijklmnopqrstuvwxyz'
yes=False
for i in check:
    if i in st:
        yes=True
    else:
        yes=False
        break
if yes:
    print('YES')
else:
    print("NO")