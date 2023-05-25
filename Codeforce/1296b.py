for run in range(int(input())):
    n,a,b,c,d=map(int,input().split())
    l_grainWeight=(a-b)*n
    h_grainWeight=(a+b)*n
    if l_grainWeight>(c+d) or h_grainWeight<(c-d):
        print('NO')
    else:
        print('YES')
#Took Hint