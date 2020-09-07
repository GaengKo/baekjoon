a = input().split()
n = []
n.append(int(a[0]))
n.append(int(a[1]))
arr = list(range(1,n[0]+1))
b = input().split()
k = []
for i in range(n[1]):
    k.append(int(b[i]))

count = 0
n_count = 0
while count<n[1]:
    if arr[0] == k[count]:
        del arr[0]
        count = count + 1
    else:
        if arr.index(k[count]) <= (len(arr)-1)//2:
            arr.append(arr.pop(0))
        else:
            arr.insert(0,arr.pop(len(arr)-1))
        n_count = n_count + 1
print(n_count)
