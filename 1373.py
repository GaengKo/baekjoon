a  = list(input())

a.reverse()
result = []
i=0
while i<len(a):
    k = 0
    if a[i] == '1':
        k = k+1
    if len(a)-i == 2:
        i = i+1
        if a[i] == '1':
            k = k+2
    elif len(a)-i >= 3:
        if a[i+1] == '1':
            k = k+2
        if a[i+2] == '1':
            k = k+4
        i=i+2
    i = i+1
    result.append(k)
for i in range(len(result)):
    print(result[len(result)-1-i],end='')