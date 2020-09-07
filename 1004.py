import math
a = int(input())
for z in range(a):
    b = input().split()
    c = int(input())
    e = 0
    for i in range(c):
        d = input().split()
        check_s = math.sqrt((int(d[0]) - int(b[0]))**2 + (int(d[1]) - int(b[1]))**2)
        check_d = math.sqrt((int(d[0]) - int(b[2])) ** 2 + (int(d[1]) - int(b[3])) ** 2)
        if check_s < int(d[2]) or check_d < int(d[2]):
            if check_s < int(d[2]) and check_d < int(d[2]):
                pass
            else:
                e = e + 1
    print(e)