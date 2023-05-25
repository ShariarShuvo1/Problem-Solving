for run in range(int(input())):
    n=int(input())
    st=''
    if n%4!=0 or n<4:
        print('NO')
    else:
        for i in range(2,n+1,2):
            st+= f'{i} '
        for j in range(1,n-1,2):
            st+= f'{j} '
        st+=f'{3*(n//2)-1}'
        print('YES')
        print(st)