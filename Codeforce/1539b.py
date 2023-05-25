for run in range(int(input())):
    n=int(input())
    if n%25==0:
        print(0)
    else:
        last=['00','25','75','50']
        s=str(n)
        n=len(s)
        for i in range(len(s)):
            for j in range(i+1,len(s)):
                if (int(s[i])*10 + int(s[j]))% 25 ==0:
                    n=min(n,len(s)-i-2)
        print(n)