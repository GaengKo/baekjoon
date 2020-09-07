goal = input()
n = int(input())

def check(z):
    for i in range(n):
        if break_button[i] == z:
            return True
    return False


if n != 0:
    break_button = input().split()

s100 = abs(int(goal)-100)
if n == 10:
    print(s100)
elif n == 0:
    if s100 > len(goal):
        print(len(goal))
    else:
        print(s100)
else:
    up = goal
    down = goal
    for i in range(int(down)+1):
        down = str(int(goal)-i)
        temp = True
        for j in range(len(down)):
            if check(down[j]):
                temp = False
                break
        if temp:
            break
    for i in range(499900):
        up = str(int(goal)+i)
        temp = True
        for j in range(len(up)):
            if check(up[j]):
                temp = False
                break
        if temp:
            break
    up = int(up)-int(goal)+len(up)
    if s100 > up:
        s100 = up
    if down == '0' and check('0'):
        pass
    else:
        down = int(goal)-int(down)+len(down)
        if s100 > down:
            s100 = down
    print(s100)


