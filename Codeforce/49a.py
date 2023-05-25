s=input().lower()
s=s[::-1]
for c in s:
    if 'a'<=c<='z':
        ch=c
        break
if ch in 'aeiouy':
    print('YES')
else:
    print('NO')