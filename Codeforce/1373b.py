for run in range(int(input())):
    s=input()
    lst=list()
    if len(s)==1:
        print('NET')
    else:
        zero=s.count('0')
        one=s.count('1')
        m=min(zero,one)
        if m%2==0:
            print('NET')
        else:
            print('DA')