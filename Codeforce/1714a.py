for run in range(int(input())):
    n,h,m=map(int,input().split())
    t=(h*60)+m #in minute
    # print(t)
    lst=list()
    for r in range(n):
        a,b=map(int,input().split())
        lst.append((a,b))
    lst.sort()
    # print(lst)
    idx=0
    for ele in lst:
        x,y=ele
        if (60*x)+y >=t:
            idx=lst.index(ele)
            break
    lst=lst[idx:]
    # print(idx)



    ho,mi=min(lst)
    ti=(ho*60)+mi
    # print(ti)
    if ti>t:
        dif=ti-t
        x=dif//60
        y=dif-(x*60)
        if x==24:
            x=0
        if y==60:
            y=0
        print(x,y)
    else:
        dif1=(24*60)-t
        dif=dif1+ti
        x=dif//60
        y=dif-(x*60)
        if x==24:
            x=0
        if y==60:
            y=0
        print(x,y)