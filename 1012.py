a = int(input())
for z in range(a):
    b = input().split()
    arr = [[0] * int(b[0]) for _ in range(int(b[1]))]
    for i in range(int(b[2])):
        c = input().split()
        arr[int(c[1])][int(c[0])]=1
    n = 0

    arr2 = [[0] * int(b[0]) for _ in range(int(b[1]))]
    for x in range(int(b[1])):
        for y in range(int(b[0])):
            if arr[x][y] == 1:
                temp_x = 0
                temp_y = 0
                if x>0 and arr[x-1][y]!=0:
                    temp_x = arr[x-1][y]
                if y>0 and arr[x][y-1]!=0:
                    temp_y = arr[x][y-1]
                if temp_x+temp_y == 0:
                    n= n+1
                    arr[x][y] = n
                else:
                    if temp_x == 0 or (temp_y!=0 and temp_x > temp_y):
                        arr[x][y] = temp_y
                    else:
                        arr[x][y] = temp_x
    xx = int(b[1])-1
    yy = int(b[0])-1
    for x in range(int(b[1])):
        for y in range(int(b[0])):
            if arr[xx-x][yy-y] > 0:
                temp_x = 0
                temp_y = 0
                if x>0 and arr[xx-x+1][yy-y]!=0:
                    temp_x = arr[xx-x+1][yy-y]
                if y>0 and arr[xx-x][yy-y+1]!=0:
                    temp_y = arr[xx-x][yy-y+1]
                if temp_x+temp_y != 0:
                    if temp_x == 0 or (temp_y!=0 and temp_x > temp_y):
                        arr[xx-x][yy-y] = temp_y
                    else:
                        arr[xx-x][yy-y] = temp_x
    result = []
    for x in arr:
        for y in x:
            if y!=0 and y not in result:
                result.append(y)

    print(len(result))