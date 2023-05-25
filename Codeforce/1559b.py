for run in range(int(input())):
    n=int(input())
    s=input()
    while '?' in s:
        if s.count('?') ==n:
            s='BR'*n
            s=s[:n]
        s=s.replace('?B','RB')
        s=s.replace('?R','BR')
        s=s.replace('B?','BR')
        s=s.replace('R?','RB')
    print(s)