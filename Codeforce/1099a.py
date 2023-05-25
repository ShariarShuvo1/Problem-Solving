s_w,s_h=map(int,input().split())
b1_w,b1_h=map(int,input().split())
b2_w,b2_h=map(int,input().split())
if b2_h>b1_h:
    b1_w,b2_w=b2_w,b1_w
    b1_h,b2_h=b2_h,b1_h
# s_w+=s_h
for i in range(s_h,-1,-1):
    s_w+=i
    if i==b1_h:
        s_w-=b1_w
    if i==b2_h:
        s_w-=b2_h
    if s_w<0:
        s_w=0
print(s_w)