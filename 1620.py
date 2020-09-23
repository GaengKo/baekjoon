import sys
N, M = map(int, sys.stdin.readline().rstrip().split())
dict = {}
for i in range(N):
     k = sys.stdin.readline().rstrip()
     dict[k] = i+1
     dict[i] = k

for i in range(M):
    a = sys.stdin.readline().rstrip()
    if a.isdigit():
        print(dict[int(a)-1])
    else:
        print(dict[a])