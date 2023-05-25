n=int(input())
i=0
j=0
sum=0
while True:
    j+=1
    s=0
    for run in range(1,j+1):
        s+=run
    if sum+s>n:
        break
    elif sum+s==n:
        i+=1
        break
    else:
        i+=1
        sum+=s
print(i)