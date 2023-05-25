k,r=map(int,input().split())
i=1
total=0
while True:
    num=i*k
    if int(str(num)[-1])==r or int(str(num)[-1])==0:
        total=i
        break
    i+=1
print(total)