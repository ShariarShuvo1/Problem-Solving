for _ in range(int(input())):
    n=input()
    lenth=len(n)
    total=0
    lst=list()
    if lenth==1:
        print(lenth)
        print(n)
    else:
        if n[1:]== '0'*(lenth-1):
            print(1)
            print(n)
        else:
            for i in range(1,lenth):
                word=n[i:]
                if n[i-1]!='0':
                    lst.append(n[i-1] + '0' *(lenth-i))
                if i==lenth-1 and n[i] !='0':
                    lst.append(n[i])
                if word[1:] == '0'*(lenth-i):
                    lst.append(word)
                    break
            print(len(lst))
            st=''
            for i in lst:
                st+= i+' '
            st=st[:len(st)-1]
            print(st)