n = int(input())
M = int(input())
S = input()
count = 0
num = 0
i = -1
while i < M-2:
    i = i+1
    if S[i:i+3] == 'IOI':
        num = num + 1
        if num == n:
            count = count + 1
            num = num - 1
        i = i+1
    else:
        num = 0
print(count)