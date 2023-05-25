n,m=map(int,input().split())
k=1
for i in range(n):
    if i%2==0:
        print("#"*m)
    else:
        if k%2==0:
            print('#','.'*(m-1),sep='')
        else:
            print('.'*(m-1),'#',sep='')
        k+=1