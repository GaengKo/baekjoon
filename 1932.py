a = int(input())

b = []
temp = [int(x) for x in input().strip().split()]
for i in range(1,a):
    c = [int(x) for x in input().strip().split()]
    for j in range(len(c)):
        if j == 0:
            c[0] = temp[0] + c[0]
        elif j == len(c)-1:
            c[j] = temp[j-1]+c[j]
        else:
            if temp[j-1] > temp[j]:
                c[j] = c[j] + temp[j-1]
            else:
                c[j] = c[j] + temp[j]
    temp = c

print(max(temp))