for run in range(int(input())):
    n=int(input())
    lst=list(map(int,input().split()))
    srt=lst.copy()
    srt.sort(reverse=True)
    if srt==lst and len(set(srt)) == n:
        print('NO')
    else:
        print('YES')