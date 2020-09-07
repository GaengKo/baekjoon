a = int(input())
for z in range(a):
    b = input().split()
    C = []
    d = int(b[0]) % 10
    C.append(d)
    for i in range(int(b[1])-1):
        d = d*int(b[0]) % 10
        if d == C[0]:
            break
        else:
            C.append(d)
    result = C[(int(b[1]) -1) % len(C)]
    if result == 0:
        print(10)
    else:
        print(result)

