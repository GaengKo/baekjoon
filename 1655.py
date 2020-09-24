import heapq
a = int(input())

mid = int(input())
small = []
large = []
print(mid)
for i in range(2,a+1):
    b = int(input())
    if b < mid:
        heapq.heappush(small,(-b,b))
    else:
        heapq.heappush(large,b)

    if len(small) > len(large):
        heapq.heappush(large,mid)
        mid = heapq.heappop(small)[1]
    elif len(large) - len(small) > 1:
        heapq.heappush(small,(-mid,mid))
        mid = heapq.heappop(large)
    print(mid)