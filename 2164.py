from collections import deque
a = int(input())
b = deque(range(1,a+1))
while len(b) != 1:
    b.popleft()
    b.append(b[0])
    b.popleft()
print(b[0])