n=int(input())
lst=list(map(int,input().split()))
coin=0
neg,zero,pos=0,0,0
for ele in lst:
    if ele<0:
        neg+=1
    elif ele==0:
        zero+=1
    else:
        pos+=1
for ele in lst:
    if ele==0:
        coin+=1
    else:
        coin+= abs(ele)-1
if neg%2==0:
    print(coin)
else:
    if zero>0:
        print(coin)
    else:
        print(coin+2)
    
