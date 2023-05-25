a,b,c,d=map(int,input().split())
st=input()
sum=0
for ele in st:
    ele=int(ele)
    if ele==1:
        sum+=a
    elif ele==2:
        sum+=b
    elif ele==3:
        sum+=c
    else:
        sum+=d
print(sum)