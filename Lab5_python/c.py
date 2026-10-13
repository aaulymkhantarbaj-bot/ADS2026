#Standard problem about soccer
import heapq
n,m=int(input())
h=[-x for x in map(int,input().split())]
heapq.heapify(h)
r=0
for _ in range(m):
    x=h[0]
    r+=x
    heapq.heapreplace(h,-(x-1))
print(r)