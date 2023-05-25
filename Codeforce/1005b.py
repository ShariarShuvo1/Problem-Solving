s=input()
t=input()
m=min(len(s),len(t))
x=''
for i in range(-1,(m*(-1))-1,-1):
    if s[i]==t[i]:
        x+=s[i]
    else:
        break
ans=(len(s)+len(t)) - (len(x)*2)
print(ans)