import sys
n = int(sys.stdin.readline())
dp = [1, 2, 4]
for i in range(3, 1000000):
    dp.append((dp[i - 3] + dp[i - 2] + dp[i - 1]) % 1000000009)

for z in range(n):
    a = int(sys.stdin.readline())
    print(dp[a-1])