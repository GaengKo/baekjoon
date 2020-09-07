import copy
n = int(input())
a = input().split()
b = input().split()
for i in range(n):
    a[i] = int(a[i])
    b[i] = int(b[i])
a.sort()
b.sort()
result=0
for i in range(n):
    result = result + a[i]*b[n-i-1]
print(result)