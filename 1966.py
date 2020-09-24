a = int(input())
result = []
for z in range(a):
    temp = input().split()
    b = []
    b.append(int(temp[0]))
    b.append(int(temp[1]))
    temp = input().split()
    c = []
    for i in range(b[0]):
        c.append(int(temp[i]))
    count = 0
    while True:
        if c[0] == max(c):
            count = count + 1
            del c[0]
            if b[1] == 0:
                break
            else:
                b[1] = b[1] - 1
        else:
            c.append(c[0])
            del c[0]
            b[1] = b[1] -1
            if b[1] < 0:
                b[1] = len(c)-1
    result.append(count)
for i in result:
    print(i)