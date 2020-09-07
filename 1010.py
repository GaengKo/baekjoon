a = int(input())
for z in range(a):
    b = input().split()
    c = 1
    for i in range(int(b[0])):
        c = c * (int(b[1])-i)
    for i in range(int(b[0])):
        c = c // (i+1)
    print(c)