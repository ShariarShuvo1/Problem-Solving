n=int(input())
s=input()
new=''
ln=n
if n%2==1:
    new+=s[0]
    s=s[1:]
    for i in range(n-1):
        if i%2==0:
            new = s[i] + new
        else:
            new+=s[i]
    print(new)
else:
    new+=s[0]
    s=s[1:]
    for i in range(n-1):
        if i%2==0:
            new+=s[i]
        else:
            new = s[i] + new
    print(new)