for run in range(int(input())):
    s=input()
    n=len(s)
    new_s=''
    if n>2:
        new_s+=s[:2]
        for i in range(2,n):
            if i%2==1:
                new_s+=s[i]
        print(new_s)
    else:
        print(s)