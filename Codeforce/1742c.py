for run in range(int(input())):
    input()
    row=list()
    for r in range(8):
        row.append(input())
    col=['','','','','','','','']
    for r in range(8):
        for c in range(8):
            col[r]+=row[c][r]
    if 'RRRRRRRR' in row:
        print('R')
    elif 'BBBBBBBB' in col:
        print('B')
