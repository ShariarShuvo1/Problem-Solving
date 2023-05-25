for run in range(int(input())):
    need,first,alarm,lazy=map(int,input().split())
    if first>=need:
        print(first)
    else:
        if lazy>=alarm:
            print(-1)
        else:
            need-=first
            x= alarm-lazy
            ans= first+(need+x-1)//x*alarm
            print(ans)