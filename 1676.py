
N = int(input())
a = 1
for i in range(1,N+1):
    a = a*i
count = 0
a = str(a)[::-1]
for i in a:
    if i == '0':
        count = count + 1
    else:
        break
print(count)
