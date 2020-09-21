def factorial(k):
    z = 1
    for i in range(k):
        z = z*(i+1)
    return z
n = int(input())
k = n//2
result = 0

for i in range(0,k+1):
    s = n - (2 * i)
    s1 = factorial(i+s)//(factorial(i)*factorial(s))
    result = result + s1
print(result%10007)


