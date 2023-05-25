import math
for run in range(int(input())):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    x=math.log10(a/c)+(b-d)
    if x>0:
        print('>')
    elif x<0:
        print('<')
    else:
        print('=')