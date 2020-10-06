def ffff(c,s,z,n,m):
    a = 0
    b = 0
    x = s * 10
    x = x + m
    if n == z-1:
        print(x)
        return x
    else:
        if m == 0:
            a= ffff(x,z,n+1,1)
        elif m == 9:
            b = ffff(x,z,n+1,8)
        else:
            a = ffff(x,z,n+1,m-1)
            b = ffff(x,z,n+1,m+1)
    return a+b
z =  int(input())
s = 0
result = 0
c = [False]*10
for i in range(1,10):
    result = result + ffff(s,z,0,i)
print(result)