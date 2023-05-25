n=int(input())
s=input()
# i=1
# while i<n:
#     if n>1:
#         if s[i] != s[i-1]:
#             n-=2
#             s=s[0:i-1] + s[i+1:]
#             if i>2:
#                 i-=2
#             else:
#                 i=1
#         else:
#             i+=1
#     else:
#         break
# print(n)
#TLE

zero=s.count('0')
one=s.count('1')
print(abs(zero-one))
#Took hint