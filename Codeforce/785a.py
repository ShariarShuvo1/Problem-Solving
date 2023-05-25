n=int(input())
lst=list()
for run in range(n):
    lst.append(input())
dct={'Tetrahedron':4,'Cube':6,'Octahedron':8,'Dodecahedron':12,'Icosahedron':20}
side=0
for run in lst:
    side+=dct[run]
print(side)