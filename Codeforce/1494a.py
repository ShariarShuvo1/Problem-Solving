for t in range(int(input())):
    s=input()
    p,k=s[0],s[-1]
    r=0
    for i in s:
        if r<0:
            print('NO')
            break
        else:
            if i==p:
                r+=1
            elif i==k:
                r-=1
            else:
                if s.count(p)>s.count(k):
                    r-=1
                else:
                    r+=1
    if r==0:
        print('YES')
    elif r>0:
        print('NO')