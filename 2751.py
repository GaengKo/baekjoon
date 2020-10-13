import sys
temp = []
N = int(sys.stdin.readline().rstrip())
for i in range(N):
    temp.append(int(sys.stdin.readline().rstrip()))
temp.sort()
for i in temp:
    print(i)gi