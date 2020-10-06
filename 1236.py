n,m= map(int,input().split())
temp = []
r = 0
c = 0
for i in range(n):
    line = input()
    if 'X' not in line:
        r = r + 1
    temp.append(line)
for i in range(m):
    check = True
    for j in range(n):
        if temp[j][i] == 'X':
            check = False
            break
    if check:
        c = c + 1
if r>c:
    print(r)
else:
    print(c)