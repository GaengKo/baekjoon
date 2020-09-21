n = int(input())

a = map(int,input().split())
a = sorted(a)
s = 0
for i in range(n+1):
    for j in range(i):
        s = s + int(a[j])
print(s)