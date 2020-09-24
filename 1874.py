a = int(input())
b = []
d = []
temp = []
result = []
for i in range(a):
    b.append(int(input()))
c = list(range(1,a+1))

count = 0
while d != b:
    if len(temp) == 0:
        temp.append(c[0])
        del c[0]
        result.append('+')
    else:
        if temp[len(temp)-1] == b[count]:
            count = count + 1
            d.append(temp.pop())
            result.append('-')
        else:
            if len(c) != 0:
                temp.append(c[0])
                del c[0]
                result.append('+')
            else:
                break

if d != b:
    print('NO')
else:
    for i in result:
        print(i)