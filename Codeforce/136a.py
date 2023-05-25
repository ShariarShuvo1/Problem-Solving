n=int(input())
lst=list(map(int,input().split()))
sender=list()
for i in range(1,n+1):
    sender.append((lst.index(i))+1)
st=''
for ele in sender:
    st+=f'{str(ele)} '
print(st[:len(st)-1])