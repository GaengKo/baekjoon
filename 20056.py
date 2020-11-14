import sys
N,M,K = map(int,sys.stdin.readline().rstrip().split())
fire_ball = []
loc = []
space = []
for i in range(N):
    temp = []
    for j in range(N):
        temp.append(0)
    space.append(temp)
for i in range(M):
    fire_ball.append(list(map(int,sys.stdin.readline().rstrip().split())))
    space[fire_ball[i][0]][fire_ball[i][0]] = space[fire_ball[i][0]][fire_ball[i][0]] + 1
print(fire_ball)
for qq in range(K):
    for i in range(len(fire_ball)):
        if fire_ball[i][4] == 0:
            fire_ball[i][0] = fire_ball[i][0] - fire_ball[i][3]
            if fire_ball[i][0] < 0:
                fire_ball[i][0] = N - fire_ball[i][0] -1

