#Rock Game
import heapq
n=int(input())
a=[-x for x in map(int,input().split())]
heapq.heapify(a)
while len(a)>1:
    x=-heapq.heappop(a)
    y=-heapq.heappop(a)
    if x!=y:
        heapq.heappush(a,-(x-y))
print(-a[0] if a else 0)