# House of love
import sys
data = sys.stdin.read().split()
n, m = int(data[0]), int(data[1])
a = data[2:2 + n]
b = data[2 + n:2 + n + m]
cnt = {}
for x in a:
    x = int(x)
    cnt[x] = cnt.get(x, 0) + 1
res = []
for x in b:
    x = int(x)
    if cnt.get(x, 0) > 0:
        cnt[x] -= 1
        res.append(x)
res.sort()
print(*res)