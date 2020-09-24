n,m = map(int, input().split())
arr = [1]*(m)

while True:
    for i in range(m):
        print(str(arr[i]), end=' ' if i!=m-1 else '\n')
    k = 0
    end = True
    for i in range(m):
        if arr[m-i-1] != n:
            arr[m-i-1] = arr[m-i-1]+1
            k= m-i
            end = False
            break
    if end:
        break
    for i in range(k,m):
        arr[i] = 1

n,m=input().split()
n=int(n);m=int(m)

for i in range(0,n**m):
    for j in range(1,m+1):
        print(i//(n**(m-j))%n+1,end=' ' if j!=m else '\n')