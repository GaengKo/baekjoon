import sys
a=int(sys.stdin.readline())
b = input().split()
c = []
for i in  range(len(b)):
    c.append(int(b[i]))
c.sort()
if len(c)%2 == 0:
    print(c[0]*c[len(c)-1])
else:
    print(c[int(len(c)/2)]*c[int(len(c)/2)])