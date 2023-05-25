n=int(input())
st=input()
a=st.count('A')
d=st.count('D')
if a>d:
    print("Anton")
elif d>a:
    print("Danik")
else:
    print("Friendship")