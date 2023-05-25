n=int(input())
lst=list(map(int,input().split()))
police=0
total_police=0
crime=0
incident=0
for i in lst:
    if i!=-1:
        police+=i
    elif i==-1:
        crime+=1
        if police>0:
            crime-=1
            police-=1
        else:
            incident+=1
print(incident)
