n = int(input())
result = 4
for i in range(int(n**0.5), int((n//4)**0.5), -1):
    if i*i == n:
        result = 1
        break
    else:
        temp = n - i*i
        for j in range(int(temp**0.5), int((temp//3)**0.5), -1):
            if j*j == temp and result > 2:
                result = 2
                continue
            else:
                temp2 = temp - j*j
                for k in range(int(temp2**0.5), int((temp2//2)**0.5), -1):
                    if k*k == temp2 and result > 3:
                        result = 3
print(result)
