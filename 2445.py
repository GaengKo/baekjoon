a = int(input())

for i in range(a):
    for j in range(a*2):
        if j <= i or j >= a*2-i-1:
            print('*',end='')
        else:
            print(' ',end='')
    print()
for i in range(a-1):
    for j in range(a*2):
        if j < a-i-1 or j >= a+i+1:
            print('*',end='')
        else:
            print(' ',end='')
    print()