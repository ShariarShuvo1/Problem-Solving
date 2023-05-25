a,b,c=map(int,input().split())
d,e,f=map(int,input().split())
g,h,i=map(int,input().split())

one=(a+b+d+1)%2
two=(a+b+c+e+1)%2
three=(b+c+f+1)%2
four=(a+d+g+e+1)%2
five=(b+d+e+f+h+1)%2
six=(c+f+i+e+1)%2
seven=(d+g+h+1)%2
eight=(e+g+h+i+1)%2
nine=(f+i+h+1)%2

print(one,two,three,sep='')
print(four,five,six,sep='')
print(seven,eight,nine,sep='')