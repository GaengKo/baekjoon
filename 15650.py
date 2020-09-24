import sys
sys.setrecursionlimit(100000)

def print_n(index,n,m):
    if index == m:
        for i in range(m):
            print(str(arr[i])+' ',end='')
        print()
        return
    for i in range(index,n):
        if check[i] == True:
            continue
        arr[index] = i+1
        for j in range(0,i+1):
            check[j] = True
        print_n(index+1,n,m)
        for j in range(0, i + 1):
            check[j] = False

n,m = map(int, input().split())
arr = [0]*(m)
check = [False]*(n)
print_n(0,n,m)