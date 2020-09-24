N,r,c = map(int,input().split())

z = 2**N

result = 0
while True:
    k = z*(z//2)
    if r >= z//2:
        result = result + k
        r = r - z//2
    if c >= z//2:
        result = result + k//2
        c = c - z/2
    z = z//2
    if z==1:
        break

print(result)
