vl,va=map(int,input().split())
i=1
while vl!=0 or va!=0:
    if i%2==1:
        vl-=i
    else:
        va-=i
    if i%2==0 and vl<i+1:
        print('Vladik')
        break
    if i%2==1 and va<i+1:
        print('Valera')
        break
    i+=1