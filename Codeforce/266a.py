n=int(input())
st=input()
l=list()
for ele in st:
    l.append(ele)
new=list()
count=0
for i in range(len(l)):
    try:
        if new[-1]!=l[i]:
            new.append(l[i])
    except:
        new.append(l[i])
print(len(l)-len(new))