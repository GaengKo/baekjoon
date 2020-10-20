import sys

n,k = map(int,sys.stdin.readline().rstrip().split())
temp = []
l_1 = sys.stdin.readline().rstrip().split()
l = []
for i in l_1:
    l.append(int(i))
c_k = 0
count = 0
while c_k < k:
    count = count + 1
    length = len(temp)
    for i in range(length):
        temp[i] = temp[i] + 1
    l.insert(0,l.pop())
    i = 0
    while i<len(temp):
        if temp[i] == n-1:
            temp.pop(i)
            i = i - 1
        elif l[temp[i]+1] > 0 and temp[i]+1 not in temp:
            temp[i] = temp[i]+1
            l[temp[i]] = l[temp[i]] - 1
            if temp[i] == n-1:
                temp.pop(i)
                i = i - 1
        i = i + 1
    if l[0] > 0 and 0 not in temp:
        l[0] = l[0] - 1
        temp.append(0)
    check = 0
    for i in l:
        if i == 0:
            check = check + 1
    c_k = check

print(count)