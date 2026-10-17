#Nurbol hacker
n = int(input())
cur = {}  # текущий ник -> оригинальный ник
for _ in range(n):
    a, b = input().split()
    o = cur.pop(a, a)
    cur[b] = o
res = sorted((o, c) for c, o in cur.items())
print(len(res))
for o, c in res:
    print(o, c)