from collections import deque
import sys
K = int(sys.stdin.readline())
a = deque()
for i in range(K):
    b = sys.stdin.readline().split()
    if b[0] == 'push':
        a.append(int(b[1]))
    elif b[0] == 'pop':
        try:
            print(a.popleft())
        except:
            print(-1)
    elif b[0] == 'size':
        print(len(a))
    elif b[0] == 'empty':
        if len(a)>0:
            print(0)
        else:
            print(1)
    elif b[0] == 'front':
        try:
            print(a[0])
        except:
            print(-1)
    elif b[0] == 'back':
        try:
            print(a[len(a)-1])
        except:
            print(-1)