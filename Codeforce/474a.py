def mover(ele,line,shift):
    if shift=='R':
        idx=line.index(ele)
        ele = line[idx-1]
        return ele
    else:
        idx=line.index(ele)
        ele = line[idx+1]
        return ele
shift=input()
st=input()
one= 'qwertyuiop'
two= 'asdfghjkl;'
three='zxcvbnm,./'
s=''
for ele in st:
    if ele in one:
        s+=mover(ele,one,shift)
    elif ele in two:
        s+=mover(ele,two,shift)
    else:
        s+=mover(ele,three,shift)
print(s)