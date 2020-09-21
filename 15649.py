import sys
sys.setrecursionlimit(100000)

def print_n(index,n,m):
    if index == m:
        for i in range(m):
            print(str(arr[i])+' ',end='')
        print()
        return
    for i in range(n):
        if check[i] == True:
            continue
        arr[index] = i+1
        check[i] = True
        print_n(index+1,n,m)
        check[i] = False

n,m = map(int, input().split())
arr = [0]*(m)
check = [False]*(n)
print_n(0,n,m)



"""
status = []
for i in range(m):
    interval = interval * (n-i)
for i in range(interval):
    status.append('')
z = interval
for i in range(m):
    z = z // (n - i)
    q = 1
    for j in range(interval):
        for l in range(n):
            check[l] = False
        if j!=0 and (j)%z==0:
            q = q + 1
        for k in range(len(status[j])):
            check[int(status[j][k])-1] = True
        for k in range(q-1,n):
            if check[k] == False:
                q = k + 1
                status[j] = status[j]+str(q)
                break
        if q == n and (j+1)%z==0:
            q = 0
    print(status)
    """

