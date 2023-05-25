n=int(input())
lst=list(map(int,input().split()))
one=lst.count(1)
two=lst.count(2)
three=lst.count(3)
team=min(one,two,three)
if team==0:
    print(0)
else:
    print(team)
    for i in range(team):
        st=''
        st+=f'{lst.index(1)+1} '
        lst[lst.index(1)]='A'
        st+=f'{lst.index(2)+1} '
        lst[lst.index(2)]='A'
        st+=f'{lst.index(3)+1}'
        lst[lst.index(3)]='A'
        print(st)