a, b = map(int, input().split())
n = int(input())
T = 1000
for i in range(n):
    c, d, v = map(int, input().split())
    t = ((c-a)**2+(b-d)**2)**0.5/v
    T = min(t, T)
print(T)