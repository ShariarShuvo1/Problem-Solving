s=input()
if len(s)%2==0:
    n=(len(s)//2)-1
else:
    n=(len(s)//2)
l=s[n]
count,i,j=(0,n+1,n-1)
while count<len(s)-1:
    if count%2==0:
        l+=s[i]
        i+=1
    else:
        l+=s[j]
        j-=1
    count+=1
print(l)