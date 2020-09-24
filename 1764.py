import sys
N,M = map(int,input().split())

temp = []
result = []
for i in range(N+M):
    temp.append(sys.stdin.readline()[:-1])
temp = sorted(temp)
i = 0
while i < len(temp)-1:
    if temp[i] == temp[i+1]:
        result.append(temp[i])
        i = i + 1
    i = i + 1
print(len(result))
for i in result:
    print(i)