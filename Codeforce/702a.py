input();
v = s = r = 0
for x in map(int, input().split()):
    s = s + 1 if x > v else 1
    v = x;
    r = max(r, s)
print(r)