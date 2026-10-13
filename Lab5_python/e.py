#K-th sum
import heapq
q,k=map(int,input().split())
h=[]
s=0
for _ in range(q):
    cmd=input().split()
    if cmd[0]=="insert":
        x=int(cmd[1])
        if len(h)<k:
            heapq.heappush(h,x)
            s+=x
        elif x>h[0]:
            s+=x-h[0]
            heapq.heapreplace(h,x)
    else:
        print(s)