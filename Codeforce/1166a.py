n=int(input())
s=list()
for i in range (26):
    s.append(0)
for i in range (n):
    x=input()
    s[ord((x)[0])-ord('a')]+=1
c=0
for i in range (26):
    a=s[i]//2
    b=s[i]-a
    c+=a*(a-1)/2+b*(b-1)/2
print (int(c))