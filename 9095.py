
def factorial(k):
    z = 1
    for i in range(k):
        z = z*(i+1)
    return z
n = int(input())
for z in range(n):
    a = int(input())
    p = a//3
    n_3 = 0
    for i in range(p+1):
        k = a-(3*i)
        q = k//2
        for j in range(q+1):
            k2 = k-(2*j)
            n_3 = n_3+factorial(i+j+k2)//(factorial(i)*factorial(j)*factorial(k2))
            #print(i,j,k2)
            #print(n_3)
    print(n_3)
